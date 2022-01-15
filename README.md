Dale Andreoli

and17081@byui.edu

Team project with Becket Fawcett and Ben Stradling

# Bean Bag Toss Game

This embedded system uses photoelectric sensors at each hole as input. The sensors are connected to an MSP432 microcontroller that keeps track of the score. The microcontroller sends information to an LCD screen to be displayed.

<img src="Media/image000003_1.jpg" alt="gameplay" width="600"/>
<img src="Media/score_test.gif" alt="gameplay" width="600"/>

## Hardware

MSP432 Microcontroller

<img src="Documentation/MSP432.jpg" alt="gameplay" width="500"/>

LCD Display

<img src="Documentation/LCD_Display.jpg" alt="gameplay" width="500"/>

Photoelectric Sensors

<img src="Documentation/sensors.jpg" alt="gameplay" width="500"/>

## Diagrams and Tables

System Diagram - Sensors

<img src="Documentation/Project_Diagram.png" alt="gameplay" width="500"/>

LCD with Labelled Pins

<img src="Documentation/LCD_diagram.jpg" alt="gameplay" width="500"/>

LCD Pin Table

<img src="Documentation/Table.png" alt="gameplay" width="500"/>

Sensor Diagram

<img src="Documentation/tcrt5000-diagram.jpg" alt="gameplay" width="500"/>

## Code

[Click here to view](Project_Files/ECEN_361_Final_project_2020_12_07.c)

## Things we learned

* Timing systems (different methods. Ie onboard clk, delays)
* Different interrupt implementation for C/ Arduino code
* Soldering
* Adapting arduino code 
* Interfacing with different LCDs


## Some bumps we hit along the way

* Remote/ virtual coordination and testing
* Combining our C code with Energia code
* Finding proper documentation for the sensors
* Increasing the range of the sensors
* Adjusting code for a different LCD
* Implementing a timer  (using delays rather than the onboard clock)

## What could be improved

* Implement a timer( off the onboard clock - 10kHz- 48MHz )
* Battery system ( 1.7V- 3.7V)
* Full sized game ready board (Bigger holes, stronger sensors, wooden board)
* Reset Switch on the game board
* Cable management solution
* Potentiometer to control Display contrast
