//program to count the miliseconds between each impulse
//and output them to the monitor
const int pin=2;

unsigned long past=0;
unsigned long t=0;
unsigned long interval2=0;

void setup()
{
  pinMode(pin, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Begin");
}

void loop()
{
  int pin1=digitalRead(pin);
  if(pin1==LOW)
  {
    t=millis();
    interval2=t-past;
      if(interval2>50)
      {
        Serial.println(interval2);
        past=millis();
        delay(10);
      }
      else
        delay(10);  
  }
}
