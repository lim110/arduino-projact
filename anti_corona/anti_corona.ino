int sensor = 18; //A4
int IN_1   = 7;  //D7
int IN_2   = 8;  //D8
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(sensor, INPUT);
pinMode(IN_1, OUTPUT);
pinMode(IN_2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(!(digitalRead(sensor))){
//    delay(1);
    digitalWrite(IN_1, HIGH);
    digitalWrite(IN_2, LOW);
    Serial.println("Sabun keluar");
    delay(500);
    digitalWrite(IN_1, LOW);
    digitalWrite(IN_2, LOW);
    delay(1500);
  }

}
