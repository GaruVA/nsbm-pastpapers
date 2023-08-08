#include <stdio.h>

int main() {
    //declare variables
    int i, j;

    //print until 5th row
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    printf("\n");
    }

    //print rest of the rows
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
    printf("\n");
    }

    //can be done with one loop but this is way cleaner
}
