/***********************************************************

  4E 創成工学実験
	
  01input.c  - SWからの入力 -

***********************************************************/

#include <16f877a.h>


#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP
#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);  // 全LEDを消灯する
  
  while(1) {
    if (input(PIN_B1) == 1) {  // RB1(SW2)の状態を調べる
      output_c(0b11110000);
    }
    else {
      output_c(0b00001111);
    }
  }
}
