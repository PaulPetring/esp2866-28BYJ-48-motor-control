int stepdelay=5;       

int in1 = 16;
int in2 = 14;
int in3 = 12;
int in4 = 13;

void FWD(int steps)
{   for (int i=0; i <= steps; i++){
    digitalWrite(in1, LOW); digitalWrite(in4, HIGH); delay(stepdelay);
    digitalWrite(in3, LOW);   digitalWrite(in2, HIGH);   delay(stepdelay);
    digitalWrite(in4, LOW);   digitalWrite(in1, HIGH); delay(stepdelay);
    digitalWrite(in2,LOW);    digitalWrite(in3, HIGH);   delay(stepdelay);
   } 
}        

void BACK(int steps)
{   for (int i=0; i <= steps; i++){
    digitalWrite(in2,LOW);    digitalWrite(in3, HIGH);   delay(stepdelay);
    digitalWrite(in4, LOW);   digitalWrite(in1, HIGH); delay(stepdelay);
    digitalWrite(in3, LOW);   digitalWrite(in2, HIGH);   delay(stepdelay);
    digitalWrite(in1, LOW);   digitalWrite(in4, HIGH); delay(stepdelay);
   }         
}
     
void STOP()
{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    digitalWrite(in3,LOW);
    digitalWrite(in4,LOW);
}
void setup() 
{
  pinMode(in1,  OUTPUT);  
  pinMode(in2,  OUTPUT);
  pinMode(in3,  OUTPUT);
  pinMode(in4,  OUTPUT);
}

void loop() 
{
  FWD(720);
  delay(500);
  BACK(720);
  delay(500);
  STOP();
  delay(500);
}

