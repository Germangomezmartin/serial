
const int ledPin = 13;
float r1, r2;             
float rSerie, rParalel;   

void setup() { 
  Serial.begin(9600);        
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
  pinMode(ledPin, OUTPUT);
}

void loop() {
  while (Serial.available() > 0){  
    
    r1 = Serial.parseInt();
    Serial.print(" r1 = ");
    Serial.print(r1);
    Serial.print(" ohms\t ");
    
    r2 = Serial.parseInt();
    Serial.print(" r2 = ");
    Serial.print(r2);
    Serial.print(" ohms ");
    
    if (Serial.read() == '\n') { 
    rSerie = r1 + r2;
    rParalel = (r1 * r2) / (r1 + r2);
    
    Serial.print(" rSerie = ");
    Serial.print(rSerie);
    Serial.print(" ohms\t ");
    Serial.print(" rParalel = ");
    Serial.print(rParalel);
    Serial.println(" ohms ");
    Serial.println();
    Serial.println(" Entra nous valors per r1 i r2 ");
    }
  }
}

