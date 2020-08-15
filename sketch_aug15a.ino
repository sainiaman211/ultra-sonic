#define trigPin 8

#define echoPin 9

#define led 13 // CONNECT 3 LEDS AT SAME PIN

void setup()

{ Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(led, OUTPUT);

}

void loop()

{ long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 40)

{ digitalWrite(led,HIGH);

digitalWrite(led,HIGH);}

else {

digitalWrite(led,LOW);}

Serial.print(distance);

Serial.println(" cm");

delay(500);}
