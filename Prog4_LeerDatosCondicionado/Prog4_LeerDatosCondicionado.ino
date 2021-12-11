int led =13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
}
int v;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) //Si existe informacion que leer en el buffer
  {
    v = Serial.readString().toInt();
    digitalWrite(led,v); //0 o 1
    Serial.println("Acción realizada");
  }
  delay(100);
  
}
