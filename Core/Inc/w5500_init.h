#include "main.h"
#ifndef __W5500_INIT_H__
#define __W5500_INIT_H__

#include "wizchip_conf.h"

static void  wizchip_select(void);
static void  wizchip_deselect(void);
static uint8_t wizchip_read();
static void  wizchip_write(uint8_t wb);
static void wizchip_readburst(uint8_t* pBuf, uint16_t len);
static void  wizchip_writeburst(uint8_t* pBuf, uint16_t len);

void delay_cnt(volatile unsigned int nCount);
void Net_Conf(wiz_NetInfo netinfo);
void Display_Net_Conf();
void W5500_Init();

#endif
