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
    enum SEASONS {
        WINTER = 1,
        SPRING,
        SUMMER,
        AUTUMN
    };

    struct date {
        int year;
        char* month;
        int day;
        char* weekday
    };

    union values {
        int iValue;
        float fValue;
        char cValue;
    };

    struct date today = {2018,"April",15,"Sunday"};

    enum SEASONS now;
    now = SPRING - 2;

     union values value;

     value.iValue = 3;
     value.cValue = (char)value.iValue;
     value.fValue = (float)value.iValue;

    printf("cValue: %c \n", value.cValue);
    printf("iValue: %d \n", value.iValue);
    printf("fValue: %f", value.fValue);

}