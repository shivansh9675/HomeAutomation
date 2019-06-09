void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,INPUT);
pinMode(10,OUTPUT);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  rain();
  
if(Serial.available())
{
 char x=Serial.read();
 Serial.println(x);
 int val1;
 int val2;
 int val3;
 if(x=='a')
 {
  digitalWrite(6,HIGH);
 }
 if(x=='b')
 {
  digitalWrite(6,LOW);
 }
 if(x=='c')
 {
  digitalWrite(7,HIGH);
 }
 if(x=='d')
 {
  digitalWrite(7,LOW);
 }
 if(x=='e')
 {
  digitalWrite(8,HIGH);
 }
 if(x=='f')
 {
  digitalWrite(8,LOW);
 }
}
}
void rain()
{
    int a=digitalRead(9);

delay(200);
if(a==0)
{
  Serial.println("Rain detected");
  digitalWrite(10,HIGH);
}
else
{
  Serial.println("Rain not Detected");
digitalWrite(10,LOW);
}
}


