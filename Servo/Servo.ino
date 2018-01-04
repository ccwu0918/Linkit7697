int val = 0; 
int controlPin = 2; 
int buttonPin = 6; 
 
void pin_change(void) 
{ 
  val = !val; 
} 
 
void setup() { 
  Serial.begin(9600); 
  pinMode(controlPin, OUTPUT); 
  attachInterrupt(buttonPin, pin_change, RISING); 
} 
 
void loop() { 
  if (val) 
  { 
      digitalWrite(controlPin, HIGH); 
      Serial.println("High"); 
  } 
  else 
  { 
      digitalWrite(controlPin, LOW); 
      Serial.println("Low"); 
  } 
 
  delay(500); 
}
