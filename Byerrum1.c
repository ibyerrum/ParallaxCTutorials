/*
  Blank Simple Project.c
  http://learn.parallax.com/propeller-c-tutorials 
*/
#include "simpletools.h"                      // Include simple tools

int main()                                    // Main function
{
  // Add startup code here.
  print("Hello world!\n");
  print("Welcome to my favorite school\n");
  print("Bowman Charter School\n");

  int a = 0;
  int b = 0;
  int c;
  char repeat = 'y';
  
  while(repeat == 'y')
  {
    print("Enter a number: ");
    scan("%d\n", &a);
    print("Enter a second number: ");
   scan("%d\n", &b);
  
   c = a + b;
  
   print("The value of c is %d\n", c);
                
   if(c > 0)
   {
     print("The value of c is positive");
   }
  
   if(c < 0)
   {
     print("The value of c is negative");
   }          
   
   print("\nWould you like to perform another calculation? (y/n)");
   scan("%c\n", &repeat);
  }  
}
