int actuador1=11;
int actuador2=12;
int actuador3=13;

int sensor1=A0;
int sensor2= A1;
int sensor3=A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(actuador1,OUTPUT);
  pinMode(actuador2,OUTPUT);
  pinMode(actuador3,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
}
int vsensor1,vsensor2,vsensor3;
int vActuador1,vActuador2,vActuador3;
String temp;
void loop() {
  vsensor1=analogRead(sensor1);
  vsensor2=analogRead(sensor2);
  vsensor3=analogRead(sensor3);
  //Serial.print("E" +String(vsensor1)+"S"+String(vsensor2)+"S"+String(vsensor3)+ "T");
  delay(100);

  //leer datos recibido del EV para el control de los actuadores.
  if(Serial.available()>0) //ya hay informacion
  {
    temp=Serial.readString();
    
    temp.replace("\n","");
    temp.replace("\r","");
    Serial.print(temp);
  }
  
}
