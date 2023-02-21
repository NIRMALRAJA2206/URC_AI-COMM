
double ch1 = 3;   // pin for reading PWM signal from Pixhawk
double ch2 = 9;   // pin for reading PWM Signal from Pixhawk
int a=4; int b=5; // LEFT
int c=6; int d=7; // RIGHT

double mode = 10;
double ch4 = 11;

int N2 = 1510;
int N1 = 1450;

void obj(int lr){
if((lr<N1)&&(lr>=N2)) // LEFT
{ 
Serial.println("LEFT");
digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,HIGH);digitalWrite(d,LOW);  
}
else if((lr>=N2)&&(lr<N1)) // RIGHT
{     
Serial.println("RIGHT");
digitalWrite(a,HIGH); digitalWrite(b,LOW);
digitalWrite(c,LOW);digitalWrite(d,HIGH);
}
}


void setup() {
  Serial.begin(9600);  
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode(mode, INPUT);
  pinMode(ch4, INPUT);
  
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
}

void loop() {
ch1 = pulseIn(3,HIGH);
ch2 = pulseIn(9,HIGH);
ch4 = pulseIn(11,HIGH);

if(pulseIn(mode,HIGH)>= 1480 && pulseIn(mode,HIGH)<= 1500){  
int lr = pulseIn(11,HIGH);
if((lr<N1)) // LEFT
{ 
digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,HIGH);digitalWrite(d,LOW);  
}
else if((lr>N2)) // RIGHT
{     
digitalWrite(a,HIGH); digitalWrite(b,LOW);
digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch1==0)&&(ch2==0))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}
else if(((ch1>N1)&&(ch1<N2))&&((ch2>N1)&&(ch2<N2)))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

else if((ch1>=N2)&&(ch2>=N2))
{     

digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,LOW);digitalWrite(d,HIGH);    
}

else if((ch1<N1)&&(ch2>=N2)) // LEFT
{ 
digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    
}

else if((ch1>=N2)&&(ch2<N1)) // RIGHT
{     
  digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch1<N1)&&(ch2<N1))
{     
digitalWrite(a,HIGH); digitalWrite(b,LOW);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    
}

else
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}
}


else if((ch1==0)&&(ch2==0))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}
else if(((ch1>N1)&&(ch1<N2))&&((ch2>N1)&&(ch2<N2)))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

else if((ch1>=N2)&&(ch2>=N2))
{     

digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,LOW);digitalWrite(d,HIGH);    
}

else if((ch1<N1)&&(ch2>=N2)) // LEFT
{ 
digitalWrite(a,LOW); digitalWrite(b,HIGH);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    
}

else if((ch1>=N2)&&(ch2<N1)) // RIGHT
{     
  digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch1<N1)&&(ch2<N1))
{     
digitalWrite(a,HIGH); digitalWrite(b,LOW);
digitalWrite(c,HIGH);digitalWrite(d,LOW);    
}

else
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

}