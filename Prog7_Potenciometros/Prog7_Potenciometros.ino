int sensor1=A0;
int sensor2= A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.setTimeout(100);
}
int vsensor1,vsensor2;

String temp;
void loop() {
  vsensor1=analogRead(sensor1);
  vsensor2=analogRead(sensor2);
  if(vsensor1>680)
      vsensor1=2;
  else
  {
    if(vsensor1<340)
        vsensor1=0;
    else
        vsensor1=1;
  }
  if(vsensor2>680)
      vsensor2=2;
  else
  {
    if(vsensor2<340)
        vsensor2=0;
    else
        vsensor2=1;
  }
  Serial.print("E" +String(vsensor1)+"S"+String(vsensor2)+ "T");
  delay(1000);
}
