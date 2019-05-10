#include	<16f877a.h>

#fuses	HS,NOWDT,PUT,BROWNOUT,NOLVP
#use	delay(CLOCK=20000000)

void main()
{
  output_c(0x00);

  while(1){
    output_c(0b00000001);
    delay_ms(1000);
  	output_c(0b00000011);
    delay_ms(1000);
  	output_c(0b00000111);
    delay_ms(1000);
  	output_c(0b00001111);
    delay_ms(1000);
  	output_c(0b00011111);
    delay_ms(1000);
  	output_c(0b00111111);
    delay_ms(1000);
  	output_c(0b01111111);
    delay_ms(1000);
  	output_c(0b11111111);
    delay_ms(1000);
  }
}