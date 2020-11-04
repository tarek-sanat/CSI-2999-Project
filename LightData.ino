int ldrValue; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrValue = analogRead(A0);

 if(ldrValue <10){
  Serial.println(ldrValue);
 } else{
    Serial.println(ldrValue);
    // POST the data in ldrValue and current time to a server when light is detected 
    // sleep for around 30 seconds 
  
 }
  delay(100);
 
}
