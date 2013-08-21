mindberrypi
===========

Play brickbreaker with your mind!

Equipment you'll need:

  - [Mindflex Duel game](http://www.amazon.com/Mattel-T8498-Mindflex-Duel-Game/dp/B004GHNFKK)
  - [Arduino Uno](http://arduino.cc/en/Main/arduinoBoardUno)
  - [Raspberry Pi](http://www.raspberrypi.org/)
  - Soldering Iron
  - 3 x AAA batteries for the headset
  - 2 x 12” lengths of solid core hookup wire (around #22 or #24 gauge is best).
  


Step 1: Dissasemble the Mindflex
  - Using a screwdriver, open up the left pod of one of the Mindflex headsets.

Step 2: Finding the T-Pin

The NeuroSky Board is the small daughterboard towards the bottom of the headset. You should see two pins labeled "T" and "R" — these are the pins the EEG board uses to communicate serially to the microcontroller on the main board. Solder a length of wire to the “T” pin.

Step 3: Common ground

Solder another length of wire to ground — any grounding point will do, but using the large solder pad where the battery’s ground connection arrives at the board makes the job easier.

Step 4: Wire routing

Drill a hole in the case for the two wires to poke through after the case is closed. This isn't imperative, but it helps.

Step 5: Hooking up the Arduino

Put the wire from the "T" pin into the Arduino's "RX" pin. Then, put the wire from the Mindflex's ground pin into the Arduino's ground pin. Secure the Arduino to the headset with zipties so you can wear it without the Arduino falling off.

Step 6: Load the Arduino

On the Raspberry Pi, install the "brain_lib" file from this repo in your Arduino IDE. Open the "brainserial" sketch in the IDE and upload. NOTE: disconnect both the RX and ground pins from the Arduino before the upload. If you don't you will get errors and the sketch won't upload. Once the upload is complete, you can safely plug the wires back in.

Step 7: Check for serial output

Open your serial monitor and check if there is any output. If you're getting a bunch of numbers separated by commas, you're on the right track. The value that we're concerned with is the first one in the series, which measures concentration. When not wearing the headset, it should read 200. 

Step 8: Playing Brickbreaker

To play Brickbreaker with you're mind, you're going to need to leave the arduino sketch running. This is because the python script in which the game is written has methods that check for serial output. Before opening the "brickbreaker.py" file, make sure python 2.7 and pygame are installed on your machine. To run the game type <code>python brickbreaker.py</code>

That's it. You should have a working(but slow) mind-controlled brickbreaker game. We know this is not the smoothest, sharpest gaming experience out there, but this was a great learning experience for our final summer internship project. 


== Sources ==
[How to Hack Toy EEGs](http://frontiernerds.com/brain-hack)
[Arduino Brain Library](https://github.com/kitschpatrol/Arduino-Brain-Library)
[Original Brickbreaker python game](https://github.com/timbrah/Pygame-BrickBreaker)



