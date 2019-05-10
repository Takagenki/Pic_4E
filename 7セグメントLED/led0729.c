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
    output_d(i);     // iの値を7セグメントLEDに表示
    delay_ms(1000);  // 1秒待つ
    i--;             // iを1減らす
    if (i == -1) {   // iが-1だったら9にする
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