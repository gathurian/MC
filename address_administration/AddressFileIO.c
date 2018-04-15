//
// Created by Alex on 10.04.2018.
//

bool saveAddressesToFile(){
    char fileName[250];
    char fileEnding[5];
    strcpy(fileEnding,".txt");
    printf("Please specify a filename: \n");
    scanf("%s", fileName);

    strcat(fileName, fileEnding);

    FILE *file = fopen(fileName, "a");

    if(file) {
        //fprintf(file, listAddresses());
        fclose(file);
    } else{
        printf("There was an error creating the file.");
    }
}