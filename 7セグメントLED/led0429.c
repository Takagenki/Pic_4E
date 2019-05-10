#include	<16f877a.h>

#fuses	HS,NOWDT,PUT,BROWNOUT,NOLVP	// コンフィギュレーションの設定
#use	delay(CLOCK=20000000)			// クロック周波数(20MHz)の指定

void main()
{
  output_c(0x00);			// 全LEDを消灯

  while(1){
    output_c(0b10000001);
    delay_ms(100);
  	output_c(0b11000011);
    delay_ms(100);
  	output_c(0b01000010);
    delay_ms(100);
  	output_c(0b01100110);
    delay_ms(100);
  	output_c(0b00100100);
    delay_ms(100);
  	output_c(0b00111100);
    delay_ms(100);
  	output_c(0b00011000);
    delay_ms(100);
  	output_c(0b00111100);
    delay_ms(100);
  	output_c(0b00100100);
    delay_ms(100);
  	output_c(0b01100110);
    delay_ms(100);
  	output_c(0b01000010);
    delay_ms(100);
  	output_c(0b11000011);
    delay_ms(100);
  	output_c(0b10000001);
    delay_ms(100);
  }
}