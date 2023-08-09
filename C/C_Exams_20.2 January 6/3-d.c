#include <stdio.h>

int main() {
    //declare variables
    int n;

    //assign number
    n = 7;

    //declare a pointer and assign memory address
    int * pn = &n;

    //display output
    printf("---------------------------------\n");
    printf("Memory Address of n Variable: %p\n", pn);
    printf("---------------------------------\n");
}
