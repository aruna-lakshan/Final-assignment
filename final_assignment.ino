
int in1 = 6;
int in2 = 5;
int in3 = 4;
int in4 = 7;

void setup()
{
  // set all the motor control pins to outputs
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void forward()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW); 
}

void loop()
{
  forward();

}
