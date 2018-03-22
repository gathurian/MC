/***********************************
Write the function reverse(s), which reverse the order of the character array. Use this function
to write a program then, which reverse the input of a line from the standard input stream (console
for example)
 **************************************/

#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
    /*start points to the address where s starts*/
    char* start = s;
     /*end points to the address where s starts plus its lengths, -1 for \0 */
    char* end = start + strlen(s) - 1;
    /*temp for the char that is currently being switched */
    char temp;

    while (end > start)     /*While the array isnt iterated fully*/
    {
        temp = *start;
        *start = *end;     /*Switch the chars that are at the start and end of the array*/
        *end = temp;

        ++start;            /*Move the 'start' pointer to the next address */
        --end;              /*move the 'end' to the previous address*/
                            /*That way the array gets 'rolled in' from both ends*/
    }


}