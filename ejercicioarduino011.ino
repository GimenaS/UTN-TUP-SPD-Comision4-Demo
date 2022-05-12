// Ejercicio 01

void setup()
{
// Configurar Pin como Salida
pinMode(13, OUTPUT);
pinMode(10, OUTPUT);
}
void loop()
{
// Encender Led
digitalWrite(13, HIGH);
digitalWrite(10, LOW);
// Esperar 1 Segundo
delay(1000);
// Apagar Led
digitalWrite(13, LOW);
digitalWrite(10, HIGH);
// Esperar 1 Segundo
delay(1000);
}