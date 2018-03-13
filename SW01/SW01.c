#include <stdio.h>
#include <DecimalToBinary.c>
#include <FahrenheitToCelsius.c>
#include <ggT.c>
#include <MenuChooser.c>

void main() {
    //DecimalToBinary
    int wert;
    printf("Wert als Integer (auch negativ): ");
    scanf("%d", &wert);
    DecimalToBinary(wert);

    //FahrenheitToCelsius
    FahrenheitToCelsius();
    ggT(4,6);

    //ggT
    int ersteZahl, zweiteZahl;
    printf("Erste Zahl");
    scanf("%d", &ersteZahl);
    printf("Zweite Zahl");
    scanf("%d", &zweiteZahl);
    int c = ggT(ersteZahl, zweiteZahl);
    printf("Der grösste gemeinsame Teiler von %d und %d ist %d", ersteZahl, zweiteZahl, c);

    //MenuChooser
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