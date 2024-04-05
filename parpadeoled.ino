void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Se establece el pin 13 como una salida

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, (millis() / 1000) % 2); // se envia como parametro el millis dentro de 1000, para que cada vez que alcance un multiplo de 1000, con el mod 2 solo nos dara como resultado un 1 o 0, que se interpreta como 1 para HIGH y 0 para LOW
}
