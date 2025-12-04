#include <LiquidCrystal.h>
/*
// LiquidCrystal is a library, just like servo. 
// any LCD has 2 modes - 4 bit (uses 4 pins) and 8 bit (uses 8 pints). Here we are using 4 bit mode. 
// any LCD object must be initialized as (RS,EP,P1,P2,...,P4 or P8 depending on your selection mode).
// 4 bit mode uses 6 pins. 1 for RS 1 for EP and 4 for sending and receiving the data. 
// RS is the register setting pin. if RS (0) it means that we have provided a command, such as clear or move the cursor. if RS (1) it means we are sending some messages that we need to directly display.
// EP is the enabler pin used for enabling data transfer to LCD.
// we set RS = 12, EP =11, and Dpins 5-2 as P1-P4.
*/
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);  // Set up the LCD's number of columns and rows
  lcd.print("Hello, World!");  // Print a message to the LCD
}
/* Common functions in the LiquidCrystal library (assume lcd is an object of this class):
// lcd.begin(rows,cols) - initializes the LCD to display stuff. Initializes the number of inputted rows and columns for display. 
// lcd.print(text) - prints the argument onto the lcd at the current cursor position
// lcd.setCursor(row, col) - move the cursor to the specified row and column coordinate.
// lcd.home() - moves the cursor to top left or (0,0) aka home position.
// lcd.clear() - removes all the stuff from the screen and then moves the cursor back to the top left.
*/
void loop() {
  // Nothing else here
}
