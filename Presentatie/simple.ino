long randNumber;
// Variable led
int Led1 = 1; 
int Led2 = 2; 
int Led3 = 3; 
int Led4 = 4; 


void setup() {
	Serial.begin(9600);
	pinMode(Led1, OUTPUT);
	pinMode(Led2, OUTPUT);
	pinMode(Led3, OUTPUT);
	pinMode(Led4, OUTPUT);
	randomSeed(analogRead(0));
}
void loop() {
	randNumber = random(1, 4); // Hier word het nummer gegenereert.
	if(randNumber == 1){ // Check of het nummer overeen komt.
		digitalWrite(Led1, HIGH); // komt het overeen word dit uitgevoerd.
	} else {
		digitalWrite(Led1, LOW);		
	}
	delay(500);	  // halve seconden pauze
	
	if(randNumber == 2){ // Check of het nummer overeen komt.
		digitalWrite(Led2, HIGH); // komt het overeen word dit uitgevoerd.
	} else {
		digitalWrite(Led2, LOW);		
	}
	delay(500);  // halve seconden pauze
	
	if(randNumber == 3){ // Check of het nummer overeen komt.
		digitalWrite(Led3, HIGH);	// komt het overeen word dit uitgevoerd.	
	} else {
		digitalWrite(Led3, LOW);		
	}
	delay(500); // halve seconden pauze
	
	if(randNumber == 4){ // Check of het nummer overeen komt.
		digitalWrite(Led4, HIGH);// komt het overeen word dit uitgevoerd.
	} else {
		digitalWrite(Led4, LOW);		
	}
	delay(500);  // halve seconden pauze
}




