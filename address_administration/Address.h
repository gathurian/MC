//
// Created by Alex on 10.04.2018.
//

#ifndef MC_EXERCISES_ADDRESS_H
#define MC_EXERCISES_ADDRESS_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct address_t {
    char firstName[50];
    char lastName[50];
    char street[50];
    char streetNr[50];
    char zip[50];
    char city[50];
} address;

address newAddress;

typedef struct addressList_t {
    address *addr;
    int numOfAddresses;
} addressList;

addressList *addressList1;


void addNewAddress();

void listAddresses();

void readAddressesFromFile();

void saveAddressesToFile();

void sortListName();

void sortListStreet();

void sortListCity();

int compareNames(const void *a, const void *b);

int compareStreets(const void *a, const void *b);

int compareCities(const void *a, const void *b);


#endif //MC_EXERCISES_ADDRESS_H
