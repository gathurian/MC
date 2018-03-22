//
// Created by Alex on 22.03.2018.
//

#include <stddef.h>
#include <malloc.h>
#include <memory.h>
#include <stdio.h>

/*------------------------------------------------------------
 * Write a program which is holding in a connected list an arbitrary amount of names/firstnames.
Allocate memory for this list and their elements dynamically. Write also a test program which
uses this list for example entering via console name and firstname and print out in a second step
the whole list.
 */

//Define the type "Person"
typedef struct Person {
    char *firstName;
    char *lastName;
    struct Person *nextPerson;
} Person;

Person *newPerson(char *FirstName, char *LastName, Person *nextPerson){
    Person *person = NULL;                          //create an "empty" Person
    person = malloc(sizeof(Person));                //allocate the required amount of memory

    person->lastName = malloc(sizeof(*LastName));   //allocate the required amount of memory
    strcpy(person->lastName, LastName);             //copy the given LastName to person.lastname

    person->firstName = malloc(sizeof(*FirstName)); //allocate the required amount of memory
    strcpy(person->firstName, FirstName);           //copy the given FirstName to person.firstname

    person->nextPerson = nextPerson;                //assign the given nextPerson to person.nextPerson
}

Person *addPerson(int number){
    Person *thisPerson = NULL;                      //create an "empty" Person
    Person *lastPerson = NULL;                      //create an "empty" Person

    char firstName[50];                             //define a char Array that holds the firstname
    char lastName[50];                              //define a char Array that holds the lastname

    for(int i = 0; i <= number; i++){
        printf("First Name:");
        scanf("%s", &firstName);       //as long as the specified number of persons is not reached
        printf("LastName: ");
        scanf("%s", &lastName);          //create new Persons with userinput-First- and Lastnames

        thisPerson = newPerson(firstName, lastName, lastPerson);    //create the Person from the given first- and lastname
        lastPerson = thisPerson;                    //make this person the lastPerson, in case this is the last loop
    }
    return lastPerson;                              //return the last person
}

void listPersons(Person *currentPerson) {
    while (currentPerson != NULL) {
        printf("%s %s -> ", currentPerson->firstName, currentPerson->lastName);
        currentPerson = currentPerson->nextPerson;
    }
    printf("NULL");
}