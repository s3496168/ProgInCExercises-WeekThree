#include <stdlib.h>
#include <stdio.h>
#include "wk3q1.h"

#define MAX 20
#define DELIM 4

/*main has moved
long convert();
char tokeniser();

int main (){
    char c;*/
    /*numbers to add*/
    /*char numsToAdd[MAX] = "2,4,6,8,10";*/
    /*the character which will be used as the token*/
   /* const char splitter[DELIM] = ",";*/
    /*pass the paramaters in*/
   /* c= tokeniser (numsToAdd, splitter);*/
    /*print statement to see if it is working*/
    /*printf("The total is: %d\n", c);
    return EXIT_SUCCESS;
}*/

char tokeniser(char addition[MAX], const char commas[DELIM]){
    /*variables*/
    char * token;
    long nForStrtol;
    int q =0;
    int final;
    int getToken = 0;
    /*strtok to produce tokenss*/
    token = strtok(addition, commas);
    /*iterate through the char array to produce the tokens*/
    while(token != NULL){
        /*fuction from q1 sets the limits on how many tokens can be produced*/
        nForStrtol = convert(token);
        q+=nForStrtol;
        if (q > getToken){
            getToken = q;
        }
        token = strtok(NULL, commas);
    }
    final = getToken;
    return final;

}