#include	<16f877a.h>

#fuses	HS,NOWDT,PUT,BROWNOUT,NOLVP
#use	delay(CLOCK=20000000)

void main()
{
  output_c(0x00);

  while(1){
    output_c(0b00000001);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00000001);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b00000010);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00000010);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b00000100);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00000100);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b00001000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00001000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b00010000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00010000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b00100000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b00100000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b01000000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b01000000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	
  	output_c(0b10000000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  	output_c(0b10000000);
    delay_ms(500);
  	output_c(0x00);
  	delay_ms(300);
  }
}