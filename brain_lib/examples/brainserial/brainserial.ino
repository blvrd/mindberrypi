// Arduino Brain Library
// Serial out example, 	grabs the brain data and sends CSV out over the hardware serial.
// Eric Mika, 2010

#include <Brain.h>
#include <SoftwareSerial.h> //this is a must




// Set up the brain parser, pass it the hardware serial object you want to listen on.                                     
Brain brain(Serial);

void setup() {
	// Start the hardware serial.
	Serial.begin(9600);
        // set up : 
        //Print a message to the LCD.

}

void loop() {
  

	// Expect packets about once per second.
	// The .readCSV() function returns a string (well, char*) listing the most recent brain data, in the following format:
	// "signal strength, attention, meditation, delta, theta, low alpha, high alpha, low beta, high beta, low gamma, high gamma"	
	if (brain.update()) {
  		Serial.println(brain.readErrors());
		Serial.println(brain.readCSV());
                
      }
      
      
   

        // Turn off the blinking cursor:
         // slcd.noBlink();
          //delay(1000);
           // Turn on the blinking cursor:
          //slcd.blink();
          //delay(1000);
	
}
