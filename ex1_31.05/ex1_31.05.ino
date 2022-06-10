int led=10;
int led2=9;
int led3=8;
char tecla;

void setup() {
   pinMode(led, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   Serial.begin(9600);
   
   
}

void loop() {
  tecla=Serial.read();

  if (tecla=='L')
  {
      digitalWrite(led,HIGH);
      digitalWrite(led2,HIGH);

      Serial.write(tecla);
      delay(1000);
  }

}
