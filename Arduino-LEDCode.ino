
int randy;
int brightness1 = 0;
int brightness2 = 0;
int brightness3 = 0;
int brightness4 = 0;
int fadeAmount1 = 15;
int fadeAmount2 = 5;
int fadeAmount3 = 15;
int fadeAmount4 = 5;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;
int Sensor = 0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);




}

void loop() {
  Sensor = analogRead(2);
  Serial.println(Sensor);
if(Sensor < 300){
randy = random(0,12);
if(randy ==0){
  analogWrite(10, brightness1);
  // change the brightness for next time through the loop:
  brightness1 = brightness1 + fadeAmount1;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness1 <= 0 || brightness1 >= 255) {
    fadeAmount1 = -fadeAmount1;
  }
}



if(randy == 1){
  analogWrite(11, brightness2);
  // change the brightness for next time through the loop:
  brightness2 = brightness2 + fadeAmount2;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness2 <= 0 || brightness2 >= 255) {
    fadeAmount2 = -fadeAmount2;
  }
}


if (randy == 2){
  if(count1 == 0){
    digitalWrite(12, HIGH);
    count1 = 1;
  }
  else{
   digitalWrite(12,LOW);
   count1 = 0;
   }
}

if (randy == 3){
  if(count2 == 0){
    digitalWrite(13, HIGH);
    count2 = 1;
  }
  else{
   digitalWrite(13,LOW);
   count2 = 0;
   }
}

if (randy == 4){
  if(count4 == 0){
    digitalWrite(9, HIGH);
    count4 = 1;
  }
  else{
   digitalWrite(9,LOW);
   count4 = 0;
   }
}

if (randy == 5){
  if(count3 == 0){
    digitalWrite(8, HIGH);
    count3 = 1;
  }
  else{
   digitalWrite(8,LOW);
   count3 = 0;
   }
}
if (randy == 6){
  if(count8 == 0){
    digitalWrite(7, HIGH);
    count8 = 1;
  }
  else{
   digitalWrite(7,LOW);
   count8 = 0;
   }
}

if(randy == 7){
  analogWrite(6, brightness3);
  // change the brightness for next time through the loop:
  brightness3 = brightness3 + fadeAmount3;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness3 <= 0 || brightness3 >= 255) {
    fadeAmount3 = -fadeAmount3;
  }
}

if (randy == 8){
  if(count5 == 0){
    digitalWrite(5, HIGH);
    count5 = 1;
  }
  else{
   digitalWrite(5,LOW);
   count5 = 0;
   }
}

if (randy == 9){
  if(count6 == 0){
    digitalWrite(4, HIGH);
    count6 = 1;
  }
  else{
   digitalWrite(4,LOW);
   count6 = 0;
   }
}

if(randy == 10){
  analogWrite(3, brightness4);
  // change the brightness for next time through the loop:
  brightness4 = brightness4 + fadeAmount4;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness4 <= 0 || brightness4 >= 255) {
    fadeAmount4 = -fadeAmount4;
  }
}

if (randy == 11){
  if(count7 == 0){
    digitalWrite(2, HIGH);
    count7 = 1;
  }
  else{
   digitalWrite(2,LOW);
   count7 = 0;
   }
}

delay(100);

}
else{
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);

delay(100);
}
}
