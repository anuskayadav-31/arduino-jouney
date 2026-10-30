# Arduino Blink

## Objective

Dimming a LED using potentiometer

## Circuit

![https://drive.google.com/file/d/1kTVNHBqcdGcqzBoJxaIi4goxL0iDpeO2/view?usp=sharing]

## Result

![https://wokwi.com/projects/479316824213827585] Wokwi link
![https://docs.google.com/document/d/1_sg3H07RKlfmM2GiUhqSxIO1-58J5ZwMbOyxi0wLJC4/edit?usp=sharing] Google Docs link

## Demo

[Watch the demonstration video]



## What I learned
-An Arduino's analog input has a very high input impedance. It draws very little current, so it does not necessarily pull a disconnected input to 0 V(A floating input).
Consequently, the pin can pick up small electrical disturbances from its surroundings.
For example:
Electrical noise from nearby wires.
Interference from your hand.
Charge retained by the input circuitry.
Coupling from nearby electrical signals.

-Same reason as above due to the floating analog input

-Convention 
Also, human eyes perceive brightness logarithmically, not linearly. While we need high resolution (10-bit) to capture accurate raw electrical data from a sensor, the human eye cannot easily distinguish between 256 levels of LED brightness and 1,024 levels of LED brightness. Providing 8 bits (256 shades of light) is more than enough to create a visually smooth fading effect.

-On an Arduino board, digital pins with a tilde (~) symbol support Pulse Width Modulation (PWM), while pins without a tilde only support standard digital input and output (HIGH/LOW).

On a standard Arduino Uno, the Arduino core implements analogWrite() on non-PWM digital pins using a simple rule:
If the value is less than 128, the pin is set to LOW.
If the value is 128 or greater, the pin is set to HIGH.
->turns out in this board, every digital pin is supporting PWM
->It measures 5V (what is normally supplied by the arduino uno board, unless we change to 3.3 V).

-These calculations give us two possibilities to investigate:
The voltage reaching the analog input is higher than 3.3 V.
The ADC reference voltage is lower than 5 V.
Other factors, including ADC configuration, resolution, and measurement error, may also affect the result.
We cannot determine the actual cause from the ADC reading alone.



-The microcontroller contains electronic switching circuits called transistors.




## Problems faced:
-Even when the middle wire of potentiometer wire was disconnected, the analog read still showed values till 560 something, but in a disconnected circuit, it wasn't supposed to be the case,but it happens(mentioned above)

-On taking the potentiometer off the breadboard, the serial montinor still displayed potPin analogRead inputs around 200 (ADC)

-brightness of LED for analog write converted into 8-bit while analogRead is taken in 10-bit

-even, when I connected the redPin to 12(without a tilde), it still responded to the change in analogRead due to potentiometer,even, the LED changed brightness gradually, instead of just going ON or OFF.This is true for all pins without tilde in the Arduino UNO R4 lite board,

-When I write digitalWrite(redLED, HIGH), how does the pin produce 5 V? 

-Upon changing the potential source supply pin to 3.3 V, the serial monitor recorded in analogRead the highest ADC as 717 instead of 1023, although it should be around 675.18 by calculations
It doesn't match (Check again!!!)