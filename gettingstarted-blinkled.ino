// ------------
// Blink an LED
// Morse Code the creator's first name
// ------------

int led1 = D7; // This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

void setup() {

	// We are going to tell our device that D7 (which we named led1 and led2 respectively) are going to be output

	pinMode(led1, OUTPUT);

}

void loop() {
	// Sequence will blink ADRIAN
	
	delay(3000);
	
	// Letter A
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(250);
	digitalWrite(led1, HIGH);
	delay(500);
	digitalWrite(led1, LOW);
	delay(1000);
	
	// Letter D
	digitalWrite(led1, HIGH);
	delay(500);
	digitalWrite(led1, LOW);
	delay(500);
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(250);
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(1000);
	
	// Letter R
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(250);
	digitalWrite(led1, HIGH);
	delay(500);
	digitalWrite(led1, LOW);
	delay(500);
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(1000);
	
    // Letter I
    digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(250);
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(1000);
	
	// Letter A
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(250);
	digitalWrite(led1, HIGH);
	delay(500);
	digitalWrite(led1, LOW);
	delay(1000);
	
	// Letter N
	digitalWrite(led1, HIGH);
	delay(500);
	digitalWrite(led1, LOW);
	delay(500);
	digitalWrite(led1, HIGH);
	delay(250);
	digitalWrite(led1, LOW);
	delay(1000);

}
