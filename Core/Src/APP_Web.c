#include "APP_Web.h"


#define _MAIN_DEBUG_

#define VER_H        1
#define VER_L        00

uint8_t socknumlist[] = {2, 3, 4, 5, 6, 7};

uint32_t data;
////////////////////////////////////////////////
// Shared Buffer Definition  				  //
////////////////////////////////////////////////
uint8_t RX_BUF[DATA_BUF_SIZE];
uint8_t TX_BUF[DATA_BUF_SIZE];

///////////////////////////
// Network Configuration //
///////////////////////////
wiz_NetInfo gWIZNETINFO = { .mac 	= {0x00, 0x08, 0xdc, 0xab, 0xcd, 0xef},	// Mac address
                            .ip 	= {192, 168, 1, 112},					// IP address
                            .sn 	= {255, 255, 255, 0},					// Subnet mask
                            .gw 	= {192, 168, 1, 1},						// Gateway address
                            .dns 	= {8, 8, 8, 8},							// DNS server
                            .dhcp 	= NETINFO_STATIC };						// DHCP enable / disable

void Init_WebAPP (void){
	W5500_Init();
	Net_Conf(gWIZNETINFO);

#ifdef _MAIN_DEBUG_
		uint8_t tmpstr[6] = {0,};

		ctlwizchip(CW_GET_ID,(void*)tmpstr);

	    printf("\r\n=======================================\r\n");
		printf(" WIZnet %s EVB Demos v%d.%.2d\r\n", tmpstr, VER_H, VER_L);
		printf("=======================================\r\n");
		printf(">> W5500 based Web Server Example\r\n");
		printf("=======================================\r\n");

		Display_Net_Conf(); // Print out the network information to serial terminal
#endif
		httpServer_init(TX_BUF, RX_BUF, MAX_HTTPSOCK, socknumlist);		// Tx/Rx buffers (1kB) / The number of W5500 chip H/W sockets in use
		reg_httpServer_cbfunc(NVIC_SystemReset, NULL); 					// Callback: NXP MCU Reset

		{
				/* Web content registration (web content in webpage.h, Example web pages) */
				reg_httpServer_webContent((uint8_t *)"index.html", (uint8_t *)index_page);
				reg_httpServer_webContent((uint8_t *)"web_page.css", (uint8_t *)webpage_css);

		#ifdef _MAIN_DEBUG_
				display_reg_webContent_list();
		#endif
		}
}

void Task_WebAPP (void){

	for(uint16_t i = 0; i < MAX_HTTPSOCK; i++)
		httpServer_run(i);

	//loopback_tcps(SOCK_TCPS, RX_BUF, 5000);
	loopback_udps(SOCK_UDPS, RX_BUF, 7000);

}
