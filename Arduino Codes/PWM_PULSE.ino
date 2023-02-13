#define MIN_PULSEWIDTH 900
#define MAX_PULSEWIDTH 2100
#define MIN_OUTPUT 0
#define MAX_OUTPUT 255

double ch1 = 3;   // pin for reading PWM signal from Pixhawk
double ch2 = 9;   // pin for reading PWM Signal from Pixhawk
int a=4; int b=5;
int c=6; int d=7;

void setup() {
  Serial.begin(9600);  
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
}

void loop() {
  

ch1 = pulseIn(3,HIGH);
ch2 = pulseIn(9,HIGH);
if((ch1==0)&&(ch2==0))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

else if((ch1>1530)&&(ch2>1530))
{     
digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    
}

else if((ch1>1530)&&(ch2<1460))
{ 
digitalWrite(a,HIGH); digitalWrite(b,LOW);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    

}

else if((ch1<1460)&&(ch2>1530))
{     
  digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch1<1460)&&(ch2<1460))
{  digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH  );
}

else
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}
  
}