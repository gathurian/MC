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