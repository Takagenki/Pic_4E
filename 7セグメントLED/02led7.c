/***********************************************************

  4E �n���H�w����
	
  02led7.c  - 7�Z�O�����gLED�Ɂu�P�v�Ɓu�W�v��\������ -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  output_c(0b00000000);   // PORTC���N���A
  output_d(0b00001111);   // 7�Z�O�����gLED������
  output_bit(PIN_B4,0);   // �u�U�[���~�߂�B

  while(1) {
    output_d(0b00000001); // 0001��\������B
    delay_ms(1000);       // 1�b�҂�

    output_d(0b00001000); // 1000��\������B
    delay_ms(1000);       // 1�b�҂�
  }
}
