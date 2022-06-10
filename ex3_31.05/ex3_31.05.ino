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

  if(tecla=='K')
  {
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);

    Serial.write(tecla);
    delay(1000);
  }

  else if(tecla=='P')
  {

    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);

    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);





    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);

    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);





    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);

    digitalWrite(led, LOW);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);



    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led3, HIGH);
    delay(200);
     
 
  }
}
