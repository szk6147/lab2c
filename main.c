// Author: Siddhartha Kollati
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 2
// Breakout: 2
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <string.h>

int main(void) 
{
  char *grade = readline("Enter your CMPSC 131 grade: ");
  double g = atof(grade);

  if (g >= 93.0)
  {
    printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (g >= 90.0 && g < 93.0)
  {
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  else if (g >= 87.0 && g < 90.0)
  {
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  else if (g >= 83.0 && g < 87.0)
  {
    printf("Your letter grade for CMPSC 131 is B.");
  }
  else if (g >= 80.0 && g < 83.0)
  {
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  else if (g >= 77.0 && g < 80.0)
  {
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  else if (g >= 70.0 && g < 77.0)
  {
    printf("Your letter grade for CMPSC 131 is C.");
  }
  else if (g >= 60.0 && g < 70.0)
  {
    printf("Your letter grade for CMPSC 131 is D.");
  }
  else if (g < 60.0)
  {
    printf("Your letter grade for CMPSC 131 is F.");
  }
  return 0;
}