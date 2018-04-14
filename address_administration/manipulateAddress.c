//
// Created by Alex on 10.04.2018.
//

#include "Address.h"

void addNewAddress() {

    char firstName[50];
    char lastName[50];
    char street[50];
    int a = 1;          //No idea, but the Street and/or StreetNr. start with a /0 without it
    char streetNr[50];
    char zip[50];
    char city[50];

    printf("Firstname: ");
    scanf("%s", firstName);
    printf("Lastname: ");
    scanf("%s", lastName);
    printf("Streetname: ");
    scanf("%s", street);
    printf("Streetnr: ");
    scanf("%s", streetNr);
    printf("Zip: ");
    scanf("%s", zip);
    printf("City: ");
    scanf("%s", city);

    strcpy(newAddress.firstName, firstName);
    strcpy(newAddress.lastName, lastName);
    strcpy(newAddress.street, street);
    strcpy(newAddress.streetNr, streetNr);
    strcpy(newAddress.zip, zip);
    strcpy(newAddress.city, city);



    int numOfAdr = addressList1->numOfAddresses;

    addressList1->addr = realloc(addressList1->addr, sizeof(address) * (numOfAdr+1));

    addressList1->addr[numOfAdr] = newAddress;

    addressList1->numOfAddresses = ++numOfAdr;
}

void listAddresses(){
    int count = addressList1->numOfAddresses;

    for(int i = 0; i < count; i++){
        address tempAddr = addressList1->addr[i];
        printf("%d %s %s %s %s %s \n",
               i+1,
               tempAddr.lastName,
               tempAddr.firstName,
               tempAddr.street,
               tempAddr.streetNr,
               tempAddr.zip,
               tempAddr.city);
    }
}
