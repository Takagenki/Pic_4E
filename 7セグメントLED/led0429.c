#include	<16f877a.h>

#fuses	HS,NOWDT,PUT,BROWNOUT,NOLVP	// �R���t�B�M�����[�V�����̐ݒ�
#use	delay(CLOCK=20000000)			// �N���b�N���g��(20MHz)�̎w��

void main()
{
  output_c(0x00);			// �SLED������

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