/*
  Byerrum1.c
  Lesson 1 for Computer Science
  
  Reference:
  http://learn.parallax.com/propeller-c-tutorials 
*/

#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  // Shows the user a simple introduction
  print("Hello world!\n");
  print("Welcome to my favorite school\n");
  print("Bowman Charter School\n");

  // Initialize varibles for use in this program
  int a = 0;                                  // First number to be entered by user
  int b = 0;                                  // Second number to be entered by user
  int c;                                      // Calculated sum of the two numbers
  char repeat = 'y';                          // Will tell when the user wishes to exit program
  
  while(repeat == 'y')                        // Repeats until the user wishes to exit
  {
    print("Enter a number: ");
    scan("%d\n", &a);
    print("Enter a second number: ");
    scan("%d\n", &b);
  
    c = a + b;                                 // Adds the two entered numbers together
  
    print("The value of c is %d\n", c);
                
    if(c > 0)                                  // Runs only if the sum is positive
    {
      print("The value of c is positive");
    }
  
    if(c < 0)                                  // Runs only if the sum is negative
    {
      print("The value of c is negative");
    }          
   
    print("\nWould you like to perform another calculation? (y/n)");  // Loop will repeat only if user enters "y"
    scan("%c\n", &repeat);
   }  
}
