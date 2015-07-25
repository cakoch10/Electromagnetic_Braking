
const int controlPin1=2;//connected to 7 on h bridge
const int controlPin2=3;//connected to 2 on h bridge
const int enable=9;//connected to 1 on h bridge



void setup()
{
  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
  pinMode(enable, OUTPUT);
  digitalWrite(controlPin1, HIGH);
  digitalWrite(controlPin2, LOW);

}

void loop()
{
  analogWrite(enable, 220);
}
