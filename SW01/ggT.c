/*************************************************333
Im module PRG1 you got to know the algorithm of Euklid for calculating the greatest common divisor (GCD) of numberser:
Finging rule for the greatest common divisor (GCD) of two integer numbers A and B:
1.	Make A the greater of the tho number A and B (exchange them if not so)
2.	Set A = A – B
3.	If A and B are unequal then continue with step 1. If they are equal then terminate the algorithm: This equal number ist the GCD.
Implement this algorithm with the aid of a while() loop.

 */

#include <stdio.h>
#include "SW01.h"

int ggT(int a, int b){
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
