//
// Created by Alex on 01.03.2018.
//
#include <stdio.h>

//Write a program which prints a 32-bit integer number in a binary notation.

void DecimalToBinary(int decimal){
    int i;
    int shift;

    for (i = 31; i >= 0; i--)
    {
        shift = decimal >> i;

        if (shift & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}

/*
 * int main(){
    for(;;){
        int wert;
        printf("Wert als Integer (auch negativ): ");
        scanf("%d", &wert);
        DecimalToBinary(wert);
    }
}*/

