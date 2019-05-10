#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  int i;

  output_c(0b00000000);   // PORTC���N���A
  output_d(0b00001111);   // 7�Z�O�����gLED������
  output_bit(PIN_B4,0);   // �u�U�[���~�߂�B

  i = 9;
  while(1) {
    output_d(i);     // i�̒l��7�Z�O�����gLED�ɕ\��
    delay_ms(1000);  // 1�b�҂�
    i--;             // i��1���炷
    if (i == -1) {   // i��-1��������9�ɂ���
      i = 9;
    }
   if(i > 0){
    if(i < 4){
     output_bit(PIN_B4,1);
     delay_ms(200);
     output_bit(PIN_B4,0);
    }
   }
   else if(i == 0){
     output_bit(PIN_B4,1);
     delay_ms(800);
     output_bit(PIN_B4,0);
   }

 }
}