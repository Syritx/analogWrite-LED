const int R_ledPIN = 9, B_ledPIN = 10;
const int potentiometer = A0;

float t = 0;

void setup() {
  // put your setup code here, to run once:

    pinMode(R_ledPIN, OUTPUT);
    pinMode(B_ledPIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    int val = analogRead(potentiometer);
    float rgbValue = float(val)/1023 * 255;
    
    float toR = rgbValue;
    float toB = 255 - rgbValue;
        
    analogWrite(R_ledPIN,int(toR));
    analogWrite(B_ledPIN,int(toB));

    t += .01;
}
