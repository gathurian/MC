//
// Created by Alex on 10.04.2018.
//

#include "Address.h"

void addNewAddress(){
    char* firstName;
    char* lastName;
    char* street;
    int zip;
    int streetNr;
    char* city;
    scanf("Firstname: %s \n", &firstName);
    scanf("Lastname: %s \n", &lastName);
    scanf("Streetname: %s \n", &street);
    scanf("Street Nr: %d \n", &streetNr);
    scanf("City: %s\n", &city);
    scanf("ZIP: %d \n", &zip);

    address newAddress = {firstName, lastName, street, streetNr, zip, city};

}
