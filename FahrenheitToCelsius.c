/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, HTML, CSS, JS.
Code, Compile, Run and Debug online from anywhere in world.

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

int main ()
{
  FahrenheitToCelsius ();
  return 0;
}
