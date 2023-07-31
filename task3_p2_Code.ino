//define variables
int led=7;
void setup()
{
 Serial.begin(9000);
  // initialize the LED pin as an output:
 pinMode(led,OUTPUT) ;
}

void loop()
{
  int phoRseistor= analogRead(A0) ;
  Serial.println(phoRseistor) ;
  //check condition
  if(phoRseistor<500)
  {
    digitalWrite(led,LOW) ; 
  }
  else{
    digitalWrite(led,HIGH) ; 
  }
}
