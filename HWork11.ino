//  HW11 files
int ledPinOne = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPinOne, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = analogRead(A5);
  //  Serial.println(data);
  if (data > 3000) {
    digitalWrite(ledPinOne, HIGH);
  } else {
    digitalWrite(ledPinOne, LOW);
  }
  int stateButton = digitalRead(7);
  Serial.println(stateButton);
  
  if (stateButton == 1) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  int dataphotosense = analogRead(A6);
  Serial.println(dataphotosense);
  if (dataphotosense < 2500) {
    digitalWrite(12, HIGH);
  } else {
    digitalWrite(12, LOW);
  }

  delay(20);
}
