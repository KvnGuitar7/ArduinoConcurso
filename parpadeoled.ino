void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Se establece el pin 13 como una salida

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //Envia la instruccion para encender el LED
  delay(500); //Retardo de medio segundo
  digitalWrite(13, LOW); //Envia instruccion para apagar el LED
  delay(500); //Retardo de medio segundo
}
