//
// Created by Alex on 29.03.2018.
//

#include <stdio.h>

void reverse(char s[]){
    int count = (sizeof(s)-1)/2;
    char* tmp;
    char* start = &s[0];
    char* end = &s[sizeof(s)-1];

    while(count >0){
        tmp = end;
        end = start;
        start = tmp;
        count --;
    }
    printf("%s", s);

}

int main(){
    char input[100];
    scanf("Input: %p", &input);
    reverse(input);
}