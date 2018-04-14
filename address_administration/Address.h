//
// Created by Alex on 10.04.2018.
//

#ifndef MC_EXERCISES_ADDRESS_H
#define MC_EXERCISES_ADDRESS_H

#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct address_t {
    char firstName[50];
    char lastName[50];
    char street[50];
    char streetNr[50];
    char zip[4];
    char city[50];
} address;

address newAddress;

typedef struct addressList_t {
    address *addr;
    address *nextAddr;
    int numOfAddresses;
} addressList;

addressList *addressList1;


void addNewAddress();

void listAddresses();

bool readAddressesFromFile();

bool saveAddressToFile();

void sortListName();

void sortListStreet();

void sortListCity();

#endif //MC_EXERCISES_ADDRESS_H
