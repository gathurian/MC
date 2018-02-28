//
// Created by Alex on 26.02.2018.
//

#include <stdio.h>

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

int main(){
    int ersteZahl, zweiteZahl;
    printf("Erste Zahl");
    scanf("%d", &ersteZahl);
    printf("Zweite Zahl");
    scanf("%d", &zweiteZahl);
    int c = ggT(ersteZahl, zweiteZahl);
    printf("Der grösste gemeinsame Teiler von %d und %d ist %d", ersteZahl, zweiteZahl, c);

}
