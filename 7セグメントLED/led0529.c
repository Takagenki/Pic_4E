#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  int i;

  output_c(0b00000000);   // PORTCをクリア
  output_d(0b00001111);   // 7セグメントLEDを消灯
  output_bit(PIN_B4,0);   // ブザーを止める。

  i = 9;
  while(1) {
  	if(i == 0){
  		output_d(i);
  		delay_ms(1000);
  		i = 9;
  	}else{
  		if(i%3 == 0){
  			output_bit(PIN_B4,1);
  		}
  		output_d(i);
  		delay_ms(1000);
  		output_bit(PIN_B4,0);
  		i--;
  	}
  }
}