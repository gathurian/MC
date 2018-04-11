
#include "Address.h"

int main(int argc, char** argv)
{
    char c;
    do {
        printf("\n");
        printf("N --> New address\n");
        printf("L --> List addresses\n");
        printf("R --> Read addresses from file\n");
        printf("S --> Save addresses to file\n");
        printf("1 --> Sort list by name\n");
        printf("2 --> Sort list by street\n");
        printf("3 --> Sort list by city\n");
        printf("Q --> Quit\n\n");
        while (!isalnum(c = getchar())); // read as long number or letter
        c = toupper(c);
        switch (c) {
            case 'N':
                addNewAddress();
                break;
            case 'L':
                printf("listAddresses()");
                break;
            case 'R':
                printf("readAddressesFromFile())";
                break;
            case 'S':
                printf("saveAddressesToFile()");
                break;
            case '1':
                printf("sortListName()");
                break;
            case '2':
                printf("sortListStreet()");
                break;
            case '3':
                printf("sortListCity()");
                break;
        }

    } while (c != 'Q');
    return (0);
}