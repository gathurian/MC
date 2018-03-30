//
// Created by Alex on 29.03.2018.
//

#include <math.h>
#include <stdlib.h>

char* IntegerToString(int i){
    if(i <0)
        i = abs(i);
    char* str;
    double log = log10(i)+1;
    if(i == 0)
        log = 1;
    str = malloc(sizeof(str)*(int)log +1);
    int pos = 0;
    while(i){
        str[pos] = (char)i%10;
        i/=10;
        str++;
        pos++;
    }
    reverse(str);
    return str;
}
