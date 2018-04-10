//
// Created by Alex on 10.04.2018.
//

#ifndef MC_EXERCISES_ADDRESS_H
#define MC_EXERCISES_ADDRESS_H

#endif //MC_EXERCISES_ADDRESS_H

#include "Address.c"
#include "AdressFileIO.c"
#include "AddressSort.c"

struct address{
    char* firstName;
    char* lastName;
    char* street;
    int streetNr;
    int zip;
    char* city;

    struct address* next;
    struct address* prev;
};

void addNewAddress();
void listAddresses();
bool readAddressesFromFile();
bool saveAddressToFile();
void sortListName();
void sortListStreet();
void sortListCity();
