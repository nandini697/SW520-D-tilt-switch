int tiltSwitch=2;
int val;
int greenPin=8;
int redPin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(tiltSwitch, INPUT);
  digitalWrite(tiltSwitch, HIGH);
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
val=digitalRead(tiltSwitch);
if(val==0){
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}
else{
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
}
}
