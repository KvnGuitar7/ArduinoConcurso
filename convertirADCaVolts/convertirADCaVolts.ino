void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // con esta instruccion se mostraran los resultados en el monitor serial

}

void loop() {
  // put your main code here, to run repeatedly:
  int adc = analogRead(A1); // Guarda el valor de ADC en el pin A1 y se declara la variable como tipo entero
  int volt = adc * 5 / 1024; //Esta operación convierte el valor que se recibe en el ADC y lo convierte al voltaje se declara la variable como tipo entero

  Serial.print("El valor del ADC es: ");
  Serial.print(adc);
  Serial.print(" , y el voltaje es: ");
  Serial.print(volt);
  Serial.print(" voltios");

  delay(1000); // Retardo de 1 segundo entre lecturas
}