#ifndef _WEBPAGE_H_
#define _WEBPAGE_H_

/*************************************************************************************
 * JavaScript Functions
 *************************************************************************************/

#define index_page      "<!doctype html>"\
						"<html>"\
						"<head>"\
						"<meta charset='utf-8'> <title>server</title>"\
						"<style>"\
						"body"\
							"{background-color: #FFFFFF;color: #000000;font-family: Arial;font-weight: normal;font-size: 13px;line-height: 1.1875;margin: 0;padding: 0;}"\
							"a"\
							"{color: #0000FF; text-decoration: underline;} a:visited"\
							"{ color: #800080;} a:active"\
							"{ color: #FF0000;} a:hover"\
							"{ color: #0000FF; text-decoration: underline; } input:focus, textarea:focus, select:focus"\
							"{ outline: none; }"\
							"</style>"\
							"<link href='web_page.css' rel='stylesheet'>"\
									"<style>"\
									"#wb_Form1"\
									"{background-color: #FBFBFB;background-image: none;border: 0px solid #CCCCCC;border-radius: 0px;}"\
									"#Editbox1"\
									"{border: 1px solid #FFFFFF;border-radius: 4px;background-color: rgba(220,220,220,0.74);background-image: none;color: #000000;font-family: 'Times New Roman';font-weight: normal;font-style: normal;font-size: 21px;line-height: 32px;padding: 4px 4px 4px 4px;margin: 0;text-align: left;}"\
									"#Editbox1:focus"\
									"{border-color: #000000;box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(0,0,0,0.60);outline: 0;}"\
									"#Editbox2"\
									"{border: 1px solid #FFFFFF;border-radius: 4px;background-color: rgba(220,220,220,0.74);background-image: none;color: #000000;font-family: 'Times New Roman';font-weight: normal;font-style: normal;font-size: 21px;line-height: 32px;padding: 4px 4px 4px 4px;margin: 0;text-align: left;}"\
											"#Editbox2:focus"\
											"{border-color: #000000;box-shadow: inset 0px 1px 1px rgba(0,0,0,0.075), 0px 0px 8px rgba(0,0,0,0.60);outline: 0;}"\
											"#Button1"\
											"{border: 1px solid #2E6DA4;border-radius: 4px;background-color: #000080;background-image: none;color: #FFFFFF;font-family: Arial;font-weight: normal;font-style: normal;font-size: 19px;padding: 1px 6px 1px 6px;text-align: center;-webkit-appearance: none;margin: 0;}"\
											"#wb_Heading1"\
											"{background-color: transparent;background-image: none;border: 0px solid #000000;border-radius: 0px;margin: 0;padding: 0;text-align: left;}"\
											"#Heading1"\
											"{color: #4F4F4F;font-family: Arial;font-weight: bold;font-style: normal;font-size: 35px;margin: 0;text-align: left;}"\
											"#wb_Heading2"\
											"{background-color: transparent;background-image: none;border: 0px solid #000000;border-radius: 0px;margin: 0;padding: 0;text-align: left;}"\
											"#Heading2"\
											"{color: #000080;font-family: Arial;font-weight: normal;font-style: normal;font-size: 17px;margin: 0;text-align: left;}"\
											"#wb_Heading3"\
											"{background-color: transparent;background-image: none;border: 0px solid #000000;border-radius: 0px;margin: 0;padding: 0;text-align: left;}"\
											"#Heading3"\
											"{color: #000080;font-family: Arial;font-weight: normal;font-style: normal;font-size: 17px;margin: 0;text-align: left;}"\
											"#Button1"\
											"{position: absolute;left: 470px;top: 195px;width: 115px;height: 40px;z-index: 4;}"\
											"#Editbox1"\
											"{position: absolute;left: 151px;top: 19px;width: 161px;height: 32px;z-index: 0;}"\
											"#Editbox2"\
											"{position: absolute;left: 151px;top: 88px;width: 161px;height: 32px;z-index: 3;}"\
											"#wb_uid0"\
											"{position: absolute;left: 441px;top: 967px;margin: 0;border-width: 0;z-index: 250;}"\
											"#wb_Heading2"\
											"{position: absolute;left: 14px;top: 31px;width: 31px;height: 22px;z-index: 3;}"\
											"#wb_Heading3"\
											"{position: absolute;left: 14px;top: 100px;width: 119px;height: 30px;z-index: 4;}"\
											"#wb_Heading1"\
											"{position: absolute;left: 335px;top: 57px;width: 241px;height: 43px;z-index: 7;}"\
											"#wb_Form1"\
											"{position: absolute;left: 147px;top: 123px;width: 617px;height: 258px;z-index: 6;}"\
											"</style>"\
											"</head>"\
											"<body>"\
											"<div id='wb_Form1'>"\
													"<form name='Form1' method='get' action='/IP' enctype='multipart/form-data' id='Form1'>"\
													"<input type='text' id='Editbox1' name='Ip' value='' spellcheck='false'>"\
													"<input type='text' id='Editbox2' name='sn' value='' spellcheck='false'>"\
													"<input type='submit' id='Button1' name="" value='Submit'>"\
													"<div id='wb_Heading2'>"\
													"<h1 id='Heading2''>IP :</h1></div>"\
													"<div id='wb_Heading3'>"\
													"<h1 id='Heading3'>Subnet Mask :</h1></div>"\
													"</form>"\
													"</div>"\
													"<div id='wb_Heading1'>"\
													"<h1 id='Heading1'>IP CHANGER</h1></div>"\
													"</body>"\
													"</html>"\



#define webpage_css     "h1, .h1"\
						"{font-family: Arial;font-weight: bold;font-size: 32px;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						"h2, .h2"\
						"{font-family: Arial;font-weight: bold;font-size: 27px;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						"h3, .h3"\
						"{font-family: Arial;font-weight: bold;font-size: 24px;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						"h4, .h4"\
						"{font-family: Arial;font-weight: bold;font-size: 21px;font-style: italic;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						"h5, .h5"\
						"{font-family: Arial;font-weight: bold;font-size: 19px;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						"h6, .h6"\
						"{font-family: Arial;font-weight: bold;font-size: 16px;text-decoration: none;color: #000000;background-color: transparent;margin: 0px 0px 0px 0px;padding: 0px 0px 0px 0px;display: inline;}"\
						".CustomStyle"\
						"{font-family: 'Courier New';font-weight: bold;font-size: 16px;text-decoration: none;color: #2E74B5;background-color: transparent;}"\

/* Get: Network Information: function NetinfoCallback(o), getNetinfo() */

#endif
