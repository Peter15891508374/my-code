#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);//���ö˿�Ϊ��� ������һ���ַ�����͵��ʼ�������� 
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



