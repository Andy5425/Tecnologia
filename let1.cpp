// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  int i=13;
  while(i>-11){ 
    digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
    
    if(i<12){
    i=14;
    }
    else{i--;}
              
             }
  
 
}