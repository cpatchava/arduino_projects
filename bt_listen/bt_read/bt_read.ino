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
      Serial.println("on");
    }
    else if(readString == "led off"){
      digitalWrite(led, LOW);
      Serial.println("off"); 
    }
    readString="";
  }
  

}


// This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait
 
  cli();  // this turns off any background interrupts
 
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(led, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(led, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds
 
   // so 26 microseconds altogether
   microsecs -= 26;
  }
 
  sei();  // this turns them back on
}
 
void fan_on() {
 	delayMicroseconds(38664);
	pulseIR(8880);
	delayMicroseconds(4340);
	pulseIR(580);
	delayMicroseconds(1620);
	pulseIR(580);
	delayMicroseconds(520);
	pulseIR(580);
	delayMicroseconds(560);
	pulseIR(520);
	delayMicroseconds(560);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(540);
	delayMicroseconds(540);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(560);
	delayMicroseconds(560);
	pulseIR(520);
	delayMicroseconds(1640);
	pulseIR(580);
	delayMicroseconds(1600);
	pulseIR(600);
	delayMicroseconds(1620);
	pulseIR(560);
	delayMicroseconds(1640);
	pulseIR(580);
	delayMicroseconds(1600);
	pulseIR(580);
	delayMicroseconds(1640);
	pulseIR(560);
	delayMicroseconds(1640);
	pulseIR(580);
	delayMicroseconds(1600);
	pulseIR(600);
	delayMicroseconds(1620);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(560);
	delayMicroseconds(560);
	pulseIR(580);
	delayMicroseconds(520);
	pulseIR(520);
	delayMicroseconds(560);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(580);
	delayMicroseconds(1620);
	pulseIR(560);
	delayMicroseconds(540);
	pulseIR(580);
	delayMicroseconds(520);
	pulseIR(540);
	delayMicroseconds(1620);
	pulseIR(620);
	delayMicroseconds(1580);
	pulseIR(580);
	delayMicroseconds(1640);
	pulseIR(560);
	delayMicroseconds(1620);
	pulseIR(620);
	delayMicroseconds(1580);
	pulseIR(580);
	delayMicroseconds(520);
	pulseIR(600);
	delayMicroseconds(39100);
	pulseIR(8840);
	delayMicroseconds(2200);
	pulseIR(560);
	delayMicroseconds(28744);
	pulseIR(8880);
	delayMicroseconds(2160);
	pulseIR(540);

  
}

