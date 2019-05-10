/***********************************************************

  4E �n���H�w����
	
  03led7.c  - �J�E���g�A�b�v�\��(0�`9�̌J�Ԃ�) -

***********************************************************/

#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  int i;

  output_c(0b00000000);   // PORTC���N���A
  output_d(0b00001111);   // 7�Z�O�����gLED������
  output_bit(PIN_B4,0);   // �u�U�[���~�߂�B

  i = 0;
  while(1) {
    output_d(i);     // i�̒l��7�Z�O�����gLED�ɕ\��
    delay_ms(1000);  // 1�b�҂�

    i++;             // i��1���₷
    if (i == 10) {   // i��10��������0�ɂ���
      i = 0;
    }
  }
}
