// Ejercicio 03 02
int Led_Pin = 13;
int Pot_Pin = A0;
int Int_Pin = 6;
int sensorValue = 0;
int inputValue = 0;
void setup()
{
  pinMode(Led_Pin, OUTPUT);
  pinMode(Int_Pin, INPUT);
}
void loop()
{
 // Lectura Digital
  inputValue = digitalRead(Int_Pin);
  if (inputValue == HIGH)
{
  digitalWrite(Led_Pin, 1);
}
else
{
// Lectura Analógica
  sensorValue = analogRead(Pot_Pin);
  if(sensorValue< 800){
  digitalWrite(Led_Pin, 1);
} else 
{
  digitalWrite(Led_Pin, 0);
}
}
}