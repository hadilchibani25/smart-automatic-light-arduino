int capteur = A0;
int led = 8;
int luminosite = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  luminosite = analogRead(capteur);
  Serial.println(luminosite);

 if (luminosite < 300) {
    digitalWrite(led, HIGH);
    Serial.println("OBSCURITE - LED ALLUMEE");
  } 
  else if (luminosite < 600) {
    digitalWrite(led, LOW);
    Serial.println("LUMIERE MOYENNE - LED ETEINTE");
  } 
  else {
    digitalWrite(led, LOW);
    Serial.println("FORTE LUMIERE - LED ETEINTE");
  }

  delay(300);
}