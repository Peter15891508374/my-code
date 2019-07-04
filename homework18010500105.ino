#include "Arduino.h"
#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot(); 
    void dash();
    void c_space();
    void w_space(); 
  private:
    int _pin;
};

#endif /*_MORSE_H*/
char MORSE[26][4] = {
  {'.', '-', '*', '*'}, //A
  {'-', '.', '.', '.'}, //B
  {'-', '.', '-', '.'}, //C
  {'-', '.', '.', '*'}, //D
  {'.', '*', '*', '*'}, //E
  {'.', '.', '-', '.'}, //F
  {'-', '-', '.', '*'}, //G
  {'.', '.', '.', '.'}, //H
  {'.', '.', '*', '*'}, //I
  {'.', '-', '-', '-'}, //J
  {'-', '.', '-', '*'}, //K
  {'.', '-', '.', '.'}, //L
  {'-', '-', '*', '*'}, //M
  {'-', '.', '*', '*'}, //N
  {'-', '-', '-', '*'}, //O
  {'.', '-', '-', '.'}, //P
  {'-', '-', '.', '-'}, //Q
  {'.', '-', '.', '*'}, //R
  {'.', '.', '.', '*'}, //S
  {'-', '*', '*', '*'}, //T
  {'.', '.', '-', '*'}, //U
  {'.', '.', '.', '-'}, //V
  {'.', '-', '-', '*'}, //W
  {'-', '.', '.', '-'}, //X
  {'-', '.', '-', '-'}, //Y
  {'-', '-', '.', '.'}  //Z
};
  void setup()
  {
    Serial.begin(9600);//设置通信串口波特率，进行初始化
  }
 void loop() {
  String str = "";  //定义未转义字符串
  String morse = "";  //定义转义后字符串
  int i, t , temp = 0;
  int n = 0;  //对传入字符个数计数
  while (Serial.available() > 0) {
    temp = 1;  //判断是否有数据传入
    str += char(Serial.read());  //将传入的数据储存在字符串中
    delay(2);  //延迟保证传入正常
    n++;
  }

   if(temp)
    {
      for(i=0;i<n;i++)
      {
        for(t=0;t<4;t++)
        {
        if(str[i]>=97&&str[i]<=122)
        {
          morse+=char(MORSE[int(str[i]-97)][t]);
          
        }
      }
      morse+=' ';
    }
    Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);//配置端口为输出 ，构造一个字符间隔和单词间隔函数。 
	_pin=pin;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(250);
	digitalWrite(_pin,LOW);
	delay(250);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(1000);
	digitalWrite(_pin,LOW);
	delay(250);
}
void Morse::c_space()
{
	
	digitalWrite(_pin,LOW);
	delay(250*3);
}
void Morse::W_space()
{

	digitalWrite(_pin,LOW);
	delay(250*6);
}
    }
    delay(2);
  }
