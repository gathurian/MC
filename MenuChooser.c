//
// Created by Alex on 06.03.2018.
//

#include <stdio.h>


void selectA(){
    printf("Menu A selected");
}

void selectB(){
    printf("Menu B selected");
}

void selectC(){
    printf("Menu C selected");
}

void quit(){
    printf("Exiting...");
}

int main(){
    for(;;){
        char input;
        printf("A --> Select menu item A\n"
                       "B --> Select menu item B\n"
                       "C --> Select menu item C\n"
                       "Q --> Exit \n"
        "Enter your selection: \n");
        scanf("%s",input);

        switch (input){
            case 'A': selectA();
                break;
            case 'B': selectB();
                break;
            case 'C': selectC();
                break;
            case 'Q': quit();
                break;
        }}
    }

