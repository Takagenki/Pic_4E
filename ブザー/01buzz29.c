#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);   // PORTCをクリア
  output_bit(PIN_B4,0);   // ブザーを止める。

  while(1) {
    if (input(PIN_B2) == 1) {
      output_bit(PIN_B4,0);
    }
    else {
      output_bit(PIN_B4,1);
	  delay_ms(50);
	  output_bit(PIN_B4,0);
	  delay_ms(200);
      output_bit(PIN_B4,1);
	  delay_ms(50);
	  output_bit(PIN_B4,0);
	  delay_ms(200);
    }
  }
}