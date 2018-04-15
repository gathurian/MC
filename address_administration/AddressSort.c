//
// Created by Alex on 10.04.2018.
//

#include "Address.h"

void sortListName(){
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareNames);
    listAddresses();
}

void sortListStreet(){
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareStreets);
    listAddresses();
}

void sortListCity(){
    qsort(addressList1->addr, addressList1->numOfAddresses, sizeof(address), compareCities);
    listAddresses();
}

int compareNames(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;
    char name1[50];
    char name2[50];

    strcpy(name1, address1->lastName);
    strcpy(name2, address2->lastName);

    /*if(address1->lastName > address2->lastName){
        printf("shit 1");
        return 1;
    }
    else if(address1->lastName < address2->lastName){
        printf("shit 2");
        return -1;
    } else{
        printf("shit 3");
        return 0;
    }*/

    return (*(address1->lastName) - *(address2->lastName));
}

int compareCities(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;

    /*if(address1->city > address2->city){
        return 1;
    }
    else if(address1->city < address2->city){
        return -1;
    } else{
        return 0;
    }*/
    return (*(address1->city) - *(address2->city));

}


int compareStreets(const void* a, const void* b){
    address* address1 = (address*) a;
    address* address2 = (address*) b;

    /*if(address1->lastName > address2->lastName){
        return 1;
    }
    else if(address1->street < address2->streetNr){
        return -1;
    } else{
        return 0;
    }*/

    return (*(address1->street) - *(address2->street));

}