#include <stdlib.h>
#include <stdio.h>

#define STR 6
#define BASE 10

/*main has been moved
long convert();
int main(void) {
    long z;
    char j[STR] = "2020";
    z = convert(j);*/
    /*message to test and use the z variable*/
    /*printf("%ld is almost over.\n", z);
    return EXIT_SUCCESS;
}*/

long convert(char j[STR], char *ptr, int b) {
    long p;
    b=BASE;
   /*how to print pointers
    printf("pointer is: %p \n", (void *) &ptr);
    end how to print pointers*/

    /*strtol*/
    p = strtol(j, &ptr, b);

    /*if statement to return an error for non numeric data, or the number*/
    if (*ptr != '\0') {
        printf("Error: there is non-numeric data. \n");
        return EXIT_FAILURE;
    } else {
        return p;
    }
}

