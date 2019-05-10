/***********************************************************

  4E 創成工学実験
	
  01buzz.c  - SW4を押すとブザーが鳴る -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);   // PORTCをクリア
  output_bit(PIN_B4,0);   // ブザーを止める。

  while(1) {
    if (input(PIN_B2) == 1) {  // RB2(SW4)の状態を調べる
      output_bit(PIN_B4,0);    // 離した場合ブザーを止める
    }
    else {
      output_bit(PIN_B4,1);    // 押した場合ブザーを鳴らす
    }
  }
}
