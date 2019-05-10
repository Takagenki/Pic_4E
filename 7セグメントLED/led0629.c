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
    delay_ms(100);  // 1�b�҂�
   while(input(PIN_B2) == 1);
    i++;             // i��1���₷
   while(input(PIN_B2) == 0);
    if (i == 10) {   // i��10��������0�ɂ���
      i = 0;
    }
  }
}