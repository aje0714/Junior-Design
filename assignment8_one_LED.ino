#include <LiquidCrystal_I2C.h>

//Define pins here - needs redefining
#define StartBtn 23
#define RedRGB 5
#define BlueRGB 6
#define GreenRGB 7
#define CoinBtn 9
#define UpBtn 10
#define DownBtn 11
#define LeftBtn 12
#define RightBtn 13

LiquidCrystal_I2C lcd(0x3F, 16, 2);

//Score variable
int score = 0;

//Time speed variable
int speed = 1;

//Pinmode Setup
void setup() {
  lcd.begin(16, 2);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(5, 0);
  lcd.print("0");

  pinMode(StartBtn, INPUT);

}

//Code that is continuously ran
void loop() {
  //If start button pushed
  if(digitalRead(StartBtn) == HIGH) {
    runRound();
  }
}

//Method used to run rounds of the game
void runRound() {
  //Variable used to determine if game should continue running
  bool runGame = true; 

  while(runGame) {
    //randomly pick a number between [1,3]
    int choice = random(1,3);

    //switch for choices
    switch(choice) {
      //Move joystick
      case 1:
        makeNoise(1);
        //timer
        //if moved
        if
        
        break;
      //Press coin slot button
      case 2:
        makeNoise(2);
        //timer

        
        break;
      //Squeeze stress ball
      case 3:
        makeNoise(3);
        //timer


        break;
      default:
        break;
    }
  }
}

//Method used to sound audio from MP3
void makeNoise(int choice) {

}

//Method used to display score to LCD screen
void displayScore() {

}

/*
  Need special case for when you reach level 99
*/
//Method used when game is over
void gameOver() {
  //Play game over noise
  makeNoise(4);
  //Turn on Red LED
  digitalWrite(RedLED, HIGH);
  //Display final score on LCD screen
  displayScore();
}

