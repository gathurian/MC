//
// Created by Alex on 10.04.2018.
//

#define TAB (fwrite("\t", sizeof(char), strlen("\t"), file))
#define NEWLINE (fwrite("\n", sizeof(char), strlen("\n"), file))

bool saveAddressesToFile(){
    char fileName[250];
    char fileEnding[5];
    strcpy(fileEnding,".txt");
    printf("Please specify a filename. The generated file will be a .txt file: \n");
    scanf("%s", fileName);

    strcat(fileName, fileEnding);

    FILE *file = fopen(fileName, "w");

    if(file) {
        for (int i = 0; i < addressList1->numOfAddresses; i++) {
            address tempAddr = addressList1->addr[i];
            fwrite(tempAddr.firstName, sizeof(char), strlen(tempAddr.firstName), file);
            TAB;
            fwrite(tempAddr.lastName, sizeof(char), strlen(tempAddr.lastName), file);
            TAB;
            fwrite(tempAddr.street, sizeof(char), strlen(tempAddr.street), file);
            TAB;
            fwrite(tempAddr.streetNr, sizeof(char), strlen(tempAddr.streetNr), file);
            TAB;
            fwrite(tempAddr.zip, sizeof(char), strlen(tempAddr.zip), file);
            TAB;
            fwrite(tempAddr.city, sizeof(char), strlen(tempAddr.city), file);
            NEWLINE;
        }
        fclose(file);
    } else{
        printf("There was an error creating the file.");
    }
}