int income =0;
void setup ()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
    income =Serial.read();
  }
  
  if((income&&1)==1)
  {
    digitalWrite(0,HIGH);
  }
  else
  {
    digitalWrite(0,LOW);
  }
  if((income&&1<<1)==1)
  {
     digitalWrite(6,HIGH);
  }
   else
  {
    digitalWrite(6,LOW);
  }
  if((income&&1<<2)==1)
  {
     digitalWrite(5,HIGH);
  }
   else
  {
    digitalWrite(5,LOW);
  }
  if((income&&1<<3)==1)
  {
     digitalWrite(1,HIGH);
  }
   else
  {
    digitalWrite(1,LOW);
  }
  
}