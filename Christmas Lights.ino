#define LED1 10
#define LED2 11

void setup() {
	
	/* add setup code here */
	pinMode(LED1, OUTPUT);
	pinMode(LED2, OUTPUT);

}

void loop() {

	/* add main program code here */
	digitalWrite(LED1, HIGH);
	digitalWrite(LED2, HIGH);

}
