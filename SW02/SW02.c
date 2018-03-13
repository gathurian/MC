//
// Created by Alex on 13.03.2018.
//
#include <stdio.h>
#include <Reverse.c>

void main(){
    //Reverse
    char input[10000] = "txet a retne esaelP";
    printf("Please enter the text that is to be reversed: ");
    scanf("%[^\n]s", input);
    reverse(input);
    printf("%s", input);
}

