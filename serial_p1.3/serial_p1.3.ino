void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
}

void loop()                 // run over and over again
{
  Serial.println("Hello world!");  // prints hello
  delay(1000);
}

