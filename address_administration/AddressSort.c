//
// Created by Alex on 10.04.2018.
//

#include "Address.h"

void sortListName() {
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareNames);
    listAddresses();
}

void sortListStreet() {
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareStreets);
    listAddresses();
}

void sortListCity() {
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareCities);
    listAddresses();
}

int compareNames(const void *a, const void *b) {
    address *address1 = (address *) a;
    address *address2 = (address *) b;

    return (*(address1->lastName) - *(address2->lastName));
}

int compareCities(const void *a, const void *b) {
    address *address1 = (address *) a;
    address *address2 = (address *) b;

    return (*(address1->city) - *(address2->city));
}

int compareStreets(const void *a, const void *b) {
    address *address1 = (address *) a;
    address *address2 = (address *) b;
    
    return (*(address1->street) - *(address2->street));
}