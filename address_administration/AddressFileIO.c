//
// Created by Alex on 10.04.2018.
//

#define TAB (fwrite("\t", sizeof(char), strlen("\t"), file))        //writes a tab into the specified file
#define NEWLINE (fwrite("\n", sizeof(char), strlen("\n"), file))    //writes a newline into the specified file

void saveAddressesToFile() {
    char fileName[250];
    char fileEnding[5];
    strcpy(fileEnding, ".txt");
    printf("Please specify a filename. The generated file will be a .txt file: \n");
    scanf("%s", fileName);

    strcat(fileName, fileEnding);       //generate filename (name given by user + '.txt')

    FILE *file = fopen(fileName, "w");  //open file with write access

    if (file) {
        for (int i = 0; i < addressList1->numOfAddresses; i++) {    //repeat for as long as there are more addresses in the addresslist
            address tempAddr = addressList1->addr[i];               //Address buffer. Holds the current address to be written into the file
            fwrite(tempAddr.firstName, sizeof(char), strlen(tempAddr.firstName),
                   file); //write first name of the current address
            TAB;
            fwrite(tempAddr.lastName, sizeof(char), strlen(tempAddr.lastName),
                   file);   //write last name of the current address
            TAB;
            fwrite(tempAddr.street, sizeof(char), strlen(tempAddr.street),
                   file);       //write streetname of the current address
            TAB;
            fwrite(tempAddr.streetNr, sizeof(char), strlen(tempAddr.streetNr),
                   file);   //write street number of the current address
            TAB;
            fwrite(tempAddr.zip, sizeof(char), strlen(tempAddr.zip),
                   file);             //write zip of the current address
            TAB;
            fwrite(tempAddr.city, sizeof(char), strlen(tempAddr.city),
                   file);           //write city of the current address
            NEWLINE;
        }
        fclose(file);   //close the file after done writing
    } else {
        printf("There was an error creating the file.");
    }
}

void readAddressesFromFile(){
    char fileName[255];

    printf("Please specify from which file should be read");
    scanf("%s", fileName);

    FILE *file = fopen(fileName, "r");
}