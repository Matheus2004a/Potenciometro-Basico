int led = 3;
int sinal = 0;
int escala = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sinal = analogRead(A0);
  delay(300);
  escala = map(sinal,0,1023,0,255);  
  Serial.println(escala);
  analogWrite(led,escala);
}