#include <16f877a.h>

#fuses HS,NOWDT,PUT,BROWNOUT,NOLVP

#use delay(CLOCK=20000000)

void main()
{
  int i;

  output_c(0b00000000);   // PORTCをクリア
  output_d(0b00001111);   // 7セグメントLEDを消灯
  output_bit(PIN_B4,0);   // ブザーを止める。

  i = 0;
  while(1) {
    output_d(i);     // iの値を7セグメントLEDに表示
    delay_ms(100);  // 1秒待つ
   while(input(PIN_B2) == 1);
    i++;             // iを1増やす
   while(input(PIN_B2) == 0);
    if (i == 10) {   // iが10だったら0にする
      i = 0;
    }
  }
}