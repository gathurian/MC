//
// Created by Alex on 26.03.2018.
//

int createMatrix(int numRows, int numColumns, int init){
    int i = 0;
    int j = 0;
    int array[numRows][numColumns];
    for (i = 0; i<= numRows; i++){
        for (j = 0; j<= numColumns; j++){
            array[i][j] = init;
            printf((char)array[i][j]);
        }
        printf("\n");
        array[i][j] = init;
        printf(array[i][j]);
    }

    return array;
}