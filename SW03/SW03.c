//
// Created by Alex on 13.03.2018.
//

#include <FirstNameLastName.c>

int main() {
    Person *iAmAPerson = addPerson(5);      //A pointer *iAmPerson holds 5 persons
    listPersons(iAmAPerson);                //list those 5 persons, starting with IAmAPerson
    return 0;
}