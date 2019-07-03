#include "Arduino.h"
#include "Morse.h"

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



