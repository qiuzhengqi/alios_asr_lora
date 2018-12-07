/*
 * --------------------
 * Company             : LUOYANG GINGKO TECHNOLOGY CO.,LTD.
                       : 洛阳银杏科技有限公司
 * --------------------
 * Project Name        : iCore3 exti
 * Description         : iCore3 exti
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
#include "..\include\exti.h"
#include "..\fwlib\inc\stm32f4xx_gpio.h"

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
	led.initialize();
	exti.initialize();
	LED_RED_ON;
	LED_GREEN_OFF;
	LED_BLUE_OFF;
	
	while(1);		
}
