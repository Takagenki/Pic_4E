/***********************************************************

  4E 創成工学実験
	
  02input.c  - 立ち下がりエッジ検出 -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);  // 全LEDを消灯する

  while(1) {
    while (input(PIN_B2) == 0); // SW4を離すまで待つ
    //delay_ms(10);
    while (input(PIN_B2) == 1); // SW4を押すまで待つ
    output_c(0b11111111);
    delay_ms(10);

    while (input(PIN_B2) == 0); // SW4を離すまで待つ
    //delay_ms(10);
    while (input(PIN_B2) == 1); // SW4をおすまで待つ
    output_c(0b00000000);
    //delay_ms(10);
  }
}
