#include "wk3q4.h"

/*q1*/
long convert();
/*q2*/
char tokeniser();
/*q4*/
char * read();

int main (){
    /*variables*/
    char c;
    long z;
    /*char for q1*/
    char j[STR] = "2021";
    /*numbers to add in q2*/
    char numsToAdd[MAX] = "2,4,6,8,10";
    /*the character which will be used as the token in q2*/
    const char splitter[DELIM] = ",";
    /*end variables*/

    /*q1*/
    printf("\n");
    printf("Q1: \n");
    z = convert(j);
    /*message to test and use the z variable*/
    printf("%ld is here! \n", z);
    /*end q1*/

    /*q2*/
    printf("\n");
    printf("Q2: \n");
    /*pass the paramaters in*/
    c= tokeniser (numsToAdd, splitter);
    /*print statement to see if it is working*/
    printf("The total for q2 is: %d\n", c);
    /*end q2*/
    
    /*q4*/
    printf("\n");
    printf("Q4: \n");
    printf("Please provide input for q4 \n");
    read();
    printf("\n");
    /*end q4*/

    return EXIT_SUCCESS;
}