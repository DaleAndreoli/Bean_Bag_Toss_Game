//#include <CogLCD.h>
#include <LiquidCrystal.h>
#define RS 35 //6.7
#define EN 34 //2.3
#define D4 39 //2.6
#define D5 38 //2.4
#define D6 37 //5.6
#define D7 36 //6.6
#define PNT1 BIT1
#define PNT2 BIT2
#define PNT3 BIT3
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

int iScore;
int iTime;
int points;

void setup() {
    iScore = 0;
    String score;
    score = String(iScore);

    iTime = 120;
    String time;
    time = String(iTime);

  // put your setup code here, to run once:
    lcd.begin(16, 2);//LCD order
    lcd.setCursor(0,0);//Setting the cursor on LCD
    lcd.print("SCORE: ");//prints on LCD
    lcd.print(score);
    lcd.setCursor(0,1);//Setting the cursor on LCD
    lcd.print("TIME:");//prints on LCD
    lcd.print(time);
    delay(1000);//delay of 1 second

}

void loop() {
  // put your main code here, to run repeatedly: 

    while(iTime >= 0)
    {
    String score;
    score = String(iScore);

	

    String time;
    time = String(iTime);

  // put your setup code here, to run once:
    lcd.begin(16, 2);//LCD order
    lcd.setCursor(0,0);//Setting the cursor on LCD
    lcd.print("SCORE: ");//prints on LCD
    lcd.print(score);
    lcd.setCursor(0,1);//Setting the cursor on LCD
    lcd.print("TIME:");//prints on LCD
    lcd.print(time);
    delay(1000);//delay of 1 second

    iTime = iTime - 1;
    }

  
}

/***
* IQR handler for port 5
*/
void PORT5_IRQHandler(void){
while (iTime >= 0){

        // delay for switch debouncing
        for (i = 0; i < DELAY; i++){}

        // check Hole 1
        // if score in Hole 1
        if ((P5->IN & PNT1) != 0x00)
        {

            points += 50;// Hole 1 is scored add 50 points

            P5->IFG &= ~(BIT0 | BIT1 | BIT2);
        }

		// check Hole 2
        // if score in Hole 2
        if ((P5->IN & PNT2) != 0x00)
        {
          
            points += 30;// Hole 2 is scored add 30 points

            P5->IFG &= ~(BIT0 | BIT1 | BIT2);
        }

		// check hole 3
		// if hole 3 is scored
        if ((P5->IN & PNT3) != 0x00)
        {
            
            points += 10;// Hole 3 is scored add 10 points

            P5->IFG &= ~(BIT0 | BIT1 | BIT2);
        }
		return points;
    }
}
