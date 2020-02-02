#define in1 10
#define in2 11
#define in3 12
#define in4 13
#define in5 6  
#define in6 7 
#define in7 8 
#define in8 9
const int buttonPin1 = 1; 
const int buttonPin2 = 2; 
const int buttonPin3 = 3; 
const int buttonPin4 = 4; 
const int buttonPin5 = 5; 
int buttonState1 = 0;  
int buttonState2 = 0;  
int buttonState3 = 0;  
int buttonState4 = 0; 
int buttonState5 = 0;  
void setup() { 
  Serial.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(in5,OUTPUT);
  pinMode(in6,OUTPUT);
  pinMode(in7,OUTPUT);
  pinMode(in8,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(buttonPin3,INPUT);
  pinMode(buttonPin4,INPUT);
  pinMode(buttonPin5,INPUT);
}
void loop() { 
  
buttonState1 = digitalRead(buttonPin1);
buttonState2 = digitalRead(buttonPin2);
buttonState3 = digitalRead(buttonPin3);
buttonState4 = digitalRead(buttonPin4);
buttonState5 = digitalRead(buttonPin5);
if (buttonState1 == HIGH)
{
     digitalWrite(in1,1); //forward
     digitalWrite(in2,0);
     digitalWrite(in3,1);
     digitalWrite(in4,0);
     digitalWrite(in5,1); 
     digitalWrite(in6,0);
     digitalWrite(in7,1);
     digitalWrite(in8,0);
}
   
if (buttonState2 == HIGH)
     digitalWrite(in1,0); //right 
     digitalWrite(in2,1);
     digitalWrite(in3,1);
     digitalWrite(in4,0);
     digitalWrite(in5,0); 
     digitalWrite(in6,1);
     digitalWrite(in7,1);
     digitalWrite(in8,0);
if (buttonState3 == HIGH)
{    digitalWrite(in1,0); //backward
     digitalWrite(in2,1);
     digitalWrite(in3,0);
     digitalWrite(in4,1);
     digitalWrite(in5,0); 
     digitalWrite(in6,1);
     digitalWrite(in7,0);
     digitalWrite(in8,1);
}          
if (buttonState4 == HIGH)
{       
     digitalWrite(in1,1); //left
     digitalWrite(in2,1);
     digitalWrite(in3,0);
     digitalWrite(in4,0);
     digitalWrite(in5,1); 
     digitalWrite(in6,1);
     digitalWrite(in7,0);
     digitalWrite(in8,0);
}
if (buttonState5 == HIGH)
{          
     digitalWrite(in1,LOW); //STOP 
     digitalWrite(in2,LOW); 
     digitalWrite(in3,LOW); 
     digitalWrite(in4,LOW); 
     digitalWrite(in5,LOW); //STOP 
     digitalWrite(in6,LOW); 
     digitalWrite(in7,LOW); 
     digitalWrite(in8,LOW);         
}    
 
}
