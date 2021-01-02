#include "wk3q4.h"

/* main has moved
char * read();

int main (){
    printf("Please provide input for q4 \n");
    read();
    return EXIT_SUCCESS;
}*/

char * read(){
    /*to hold the char array*/
    char str [LINELEN + EXTRACHARS];
    /*to manage the while loop*/
    int j = 0;
    /*upper character count*/
    int k = 0;
    /*lower character count*/
    int l = 0;
    /*number count*/
    int m = 0;
    /*space count*/
    int n = 0;
    /*char for the switch*/
    char ch;

    /*fgets to manage user input*/
    fgets(str, LINELEN + EXTRACHARS, stdin);

    /*consume unnecessary trailing newline*/
    str[strlen(str)-1]=0;

    /*print statement for testing*/
    printf("You entered %s\n",str);    

    /*while loop to process the input*/

    /*if else statement must be used as a switch cannot evaluate a case argument at runtime*/
    while (str[j]){
        ch = str[j];
            if (isupper (ch)) {
                k+=1;    
            }else if (islower (ch)){
                l+=1;
            }else if (isdigit (ch)) {
                m+=1;
            }
            else {
                n+=1;
            }
        ++j;
    }
    printf("\n");
    printf("There are this many uppercase letters: %d \n",k);
    printf("There are this many lowercase letters: %d \n",l);
    printf("There are this many digits: %d \n",m);
    printf("There are this many spaces: %d \n",n);
    return EXIT_SUCCESS;
}