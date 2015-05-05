String readString;
int led = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop(){ 
  while ( Serial.available() )
  { 
    delay( 3 );
    char c = Serial.read();
    readString += c;

  }

  if ( readString.length() >0 ) {
    Serial.println( readString );
    if(readString == "led on"){
      digitalWrite(led, HIGH); 
    }
    else if(readString == "led off"){
      digitalWrite(led, LOW); 
    }
    readString="";
  }
  

}
