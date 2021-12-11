int actuador1=11;
int actuador2=12;
int actuador3=13;

int sensor1=A0;
int sensor2= A1;
int sensor3=A2;

void setup() {
  pinMode(actuador1,OUTPUT);
  pinMode(actuador2,OUTPUT);
  pinMode(actuador3,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
}
int vsensor1,vsensor2,vsensor3;
int valor;
void loop() {
  vsensor1=analogRead(sensor1);
  vsensor2=analogRead(sensor2);
  vsensor3=analogRead(sensor3);
  valor = Serial.readString().toInt();
  Serial.println(String(vsensor1)+" "+ String (vsensor2));
  vsensor1=vsensor1/4;
  vsensor2=vsensor2/4;
  vsensor3=vsensor3/4;
  switch(valor)
  {
    case 1:
      analogWrite(actuador1,vsensor1);
      analogWrite(actuador2,0);
      analogWrite(actuador3,0);
    break;
    case 2:
      analogWrite(actuador1,vsensor1);
      analogWrite(actuador2,vsensor2);
      analogWrite(actuador3,0);
    break;
    case 3:
      analogWrite(actuador1,vsensor1);
      analogWrite(actuador2,0);
      analogWrite(actuador3,vsensor3);
    break;
    case 4:
      analogWrite(actuador1,0);
      analogWrite(actuador2,vsensor2);
      analogWrite(actuador3,vsensor3);
    break;
    case 5:
      analogWrite(actuador1,0);
      analogWrite(actuador2,vsensor2);
      analogWrite(actuador3,0);
    break;
    case 6:
      analogWrite(actuador1,0);
      analogWrite(actuador2,0);
      analogWrite(actuador3,vsensor3);
    break;
  }
  delay(100);
}
