//
// Created by Alex on 10.04.2018.
//

#include "Address.h"

void sortListName(){
    qsort(addressList1->addr, addressList1->numOfAddresses+1, sizeof(address), compareNames);
    listAddresses();
}

void sortListStreet(){
    qsort(addressList1->addr, addressList1->numOfAddresses+1, sizeof(address), compareStreets);
    listAddresses();
}

void sortListCity(){
    qsort(addressList1->addr, addressList1->numOfAddresses+1, sizeof(address), compareCities);
    listAddresses();
}

int compareNames(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;

    if(address1->lastName > address2->lastName){
        return 1;
    }
    else if(address1->lastName < address2->lastName){
        return -1;
    } else{
        return 0;
    }
}

int compareCities(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;

    if(address1->city > address2->city){
        return 1;
    }
    else if(address1->city < address2->city){
        return -1;
    } else{
        return 0;
    }}

int compareStreets(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;

    if(address1->lastName > address2->lastName){
        return 1;
    }
    else if(address1->street < address2->streetNr){
        return -1;
    } else{
        return 0;
    }
}