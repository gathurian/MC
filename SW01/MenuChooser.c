/*************************************333
 Write a frame for a text based control menu.
After the starting of the program on the console there will be a prompt for a selection. By pressing the correspondent letter a task will be selected (a function will be called, here e.g. function doA(), doB() and doC()).
After the function call the menu text will be prompted again and another new selection can be done. With the input letter 'q' (or 'Q') the program will be terminated.

A --> Select menu item A
B --> Select menu item B
C --> Select menu item C
Q --> Exit
Enter selection:
a
Menu A selected

A --> Select menu item A
B --> Select menu item B
C --> Select menu item C
Q --> Exit
Enter selection:
B
Menu B selected

A --> Select menu item A
B --> Select menu item B
C --> Select menu item C
Q --> Exit
Enter selection:
q
Exiting...

 ******************************************************/

#include <stdio.h>


void selectA(){
    printf("Menu A selected");
}

void selectB(){
    printf("Menu B selected");
}

void selectC(){
    printf("Menu C selected");
}

void quit(){
    printf("Exiting...");
}

