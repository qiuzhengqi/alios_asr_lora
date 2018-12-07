/*
 * --------------------
 * Company             : LUOYANG GINGKO TECHNOLOGY CO.,LTD.
                       : 洛阳银杏科技有限公司
 * --------------------
 * Project Name        : iCore3 usart
 * Description         : iCore3 usart
 * --------------------
 * Tool Versions       : uVision V5.17.0.0
 * Target Device       : STM32F407IGT6
 * --------------------
 * Engineer            : ysloveivy.
 * Revision            : 0.01
 * Created Date        : 2015.11.21
 * --------------------
 * Engineer            :
 * Revision            :
 * Modified Date       :
 * --------------------
 * Additional Comments :
 *
 * --------------------
 */
//--------------------------- Include ---------------------------//
#include "..\include\led.h"
#include "..\include\main.h"
#include "..\include\usart.h"
#include "..\fwlib\inc\stm32f4xx_gpio.h"

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//---------------------------- Define ---------------------------//

//-------------------------- Variable ---------------------------//

//--------------------- Function Prototype ----------------------//

//--------------------------- Function --------------------------//
 /*
 * Name                : main
 * Description         : ---
 * Author              : ysloveivy.
 *
 * History
 * --------------------
 * Rev                 : 0.00
 * Date                : 11/21/2015
 * 
 * create.
 * --------------------
 */
int main(void)
{
	int i;
	char buffer[20];
	led.initialize();
	usart4.initialize(9600);
	usart4.printf("hello! I am iCore3!\r\n");                              //串口4输出
	while(1){
		if(usart4.receive_ok_flag){                                          //接收完成
			usart4.receive_ok_flag = 0;
			for(i = 0;i < 20;i++){
				buffer[i] = tolower(usart4.receive_buffer[i]);
			}
			//比较接收信息
			if(memcmp(buffer,"led_red_on",strlen("led_red_on")) == 0){
				LED_RED_ON;
				usart4.printf("ok!\r\n");
			}
			if(memcmp(buffer,"led_red_off",strlen("led_red_off")) == 0){
				LED_RED_OFF;
				usart4.printf("ok!\r\n");
			}	
			if(memcmp(buffer,"led_green_on",strlen("led_green_on")) == 0){
				LED_GREEN_ON;
				usart4.printf("ok!\r\n");
			}	
			if(memcmp(buffer,"led_green_off",strlen("led_green_off")) == 0){
				LED_GREEN_OFF;
				usart4.printf("ok!\r\n");
			}	
			if(memcmp(buffer,"led_blue_on",strlen("led_blue_on")) == 0){
				LED_BLUE_ON;
				usart4.printf("ok!\r\n");
			}	
			if(memcmp(buffer,"led_blue_off",strlen("led_blue_off")) == 0){
				LED_BLUE_OFF;
				usart4.printf("ok!\r\n");
			}				
		}
	}
}
