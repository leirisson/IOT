int botao = 2;
int led = 13;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  int estado = digitalRead(botao);

  if(estado == HIGH){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }

}
