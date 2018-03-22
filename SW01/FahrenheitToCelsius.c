/******************************************************************************
Write a program which converts temperatures of Fahrenheit in Degree Celsius.
Rule: °C = (5/9) · (°F – 32)
Implement this formula with a function.
The program should convert values between 0 °F and 210 °F in steps fo 15 °F. The console output should print out the following information (left column: temperatur in °F, right column temperatur in °C:
 0       -17.77777
15      -9.444445
30      -1.111111
45      7.222222
60      15.555556
75      23.888889
90      32.222225
105     40.555557
120     48.888893
135     57.222225
150     65.555557
165     73.888893
180     82.222229
195     90.555557
210     98.888893

Use in the main() function a loop which calls the converting function and does the print out.


*******************************************************************************/
#include <stdio.h>

float FahrenheitToCelsius ()
{
  for (int i = 0; i <= 210; i += 15)
    {
      float f = (5.0 / 9.0) * (i - 32.0);
      printf ("%f \n", f);
    }

}
