int meterx=A1;
int metery=A2;
int led1=12;
int led2=11;
int led3=10;
int led4= 9;
int led5= 8;


void setup()
{
Serial.begin(9600);

pinMode(meterx,INPUT);
pinMode(metery,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);

}


void loop()
{
int x=analogRead(meterx);
int y=analogRead(metery);


if(x<350 && x>340 && y<350 && y>340)
{

digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH); 
digitalWrite(led3,HIGH); 
digitalWrite(led4,HIGH); 
digitalWrite(led5,HIGH); 

  
}


else
{


digitalWrite(led1,LOW);
digitalWrite(led2,LOW); 
digitalWrite(led3,LOW); 
digitalWrite(led4,LOW); 
digitalWrite(led5,LOW); 


}
}
