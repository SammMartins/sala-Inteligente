void setup() {
  pinMode(7, OUTPUT); // Configura o pino 7 como saída do Led Verde
  pinMode(8, OUTPUT); // Configura o pino 7 como saída do Led Vermelho
}

void loop() {
  digitalWrite(7, HIGH); // Liga o LED Verde
  delay(1000); // Espera por um segundo
  digitalWrite(7, LOW); // Desliga o LED Verde
  delay(1000); // Espera por um segundo
  digitalWrite(8, HIGH); // Liga o LED Vermeho
  delay(1000); // Espera por um segundo
  digitalWrite(8, LOW); // Deliga o LED Vermeho
  delay(1000); // Espera por um segundo
}
