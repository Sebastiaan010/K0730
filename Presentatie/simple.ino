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
	randNumber = random(1, 4);
	if(randNumber == 1){
		digitalWrite(Led1, HIGH);
	} else {
		digitalWrite(Led1, LOW);		
	}
	delay(500);	
	
	if(randNumber == 2){
		digitalWrite(Led2, HIGH);
	} else {
		digitalWrite(Led2, LOW);		
	}
	delay(500);
	
	if(randNumber == 3){
		digitalWrite(Led3, HIGH);
	} else {
		digitalWrite(Led3, LOW);		
	}
	delay(500);
	
	if(randNumber == 4){
		digitalWrite(Led4, HIGH);
	} else {
		digitalWrite(Led4, LOW);		
	}
	delay(500);
}




