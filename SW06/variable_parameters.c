//
// Created by Alex on 09.04.2018.
//

#include <stdarg.h>
#include <stdio.h>
#include <float.h>

/*This function will calculate the average of num values, which are passed to it */

double average(int num, ...){
    va_list arguments;          //initialisation of the list that takes the additional arguments
    double sum = 0;

    /*initializing arguments to store all values after num*/
    va_start(arguments, num);
    /*Sum all the inputs. we still rely on the function caller to tell us how many there are*/
    for(int x = 0; x<num; x++){
        sum+=va_arg(arguments, double);
    }
    va_end(arguments);
    return sum/num;
}

double minimumf(int num, ...){
    va_list arguments;
    double min = DBL_MAX;
    double temp = 0;

    va_start(arguments, num);

    for(int i = 0; i < num; i++){
        temp = va_arg(arguments, double);
        if(temp < min){
            min = temp;
        }
    }
    va_end(arguments);
    return min;
}

int main(){
    printf("%f\n", average(3, 12.2, 22.3, 4.5));

    printf("%f\n", average(5, 3.3, 2.2, 1.1, 5.5, 3.3));

    printf("%f\n", minimumf(3, 333.2, 100.3, 22.3));
}