#include "wk3q2.h"

long convert();
char tokeniser();

static void read_rest_of_the_line(void){
    /*character to read from the buffer*/
    int ch;
    /*while loop to iterate through the buffer to clear it*/
    while(ch = getchar(), ch != EOF && ch != '\n');
    clearerr(stdin);
}

int main(){
    char line[LINELEN+EXTRACHARS];
    const char splitter [LINELEN+EXTRACHARS]=",";
    char d;
    int  i =1;
    do{
        printf("Please enter the input for question 3: \n");
        /*fgets to process user input*/
        fgets(line, LINELEN+EXTRACHARS, stdin);
        /*test for buffer overflow-ifpresent call in the function to clear the buffer*/
        if(line[strlen(line)-1]!='\n'){
            printf("Error: buffer overflow1\n");
            read_rest_of_the_line();
            continue;
        }
        i++;
    }while(i==1);
    /*remove trailing newline-no longer needed*/
    line[strlen(line)-1]=0;
    /*call in tokenisation function from q2*/
    d=tokeniser(line, splitter);
    /*print statement for testing*/
    printf("The total for q3 is: %d\n",d);
    return EXIT_SUCCESS;
}