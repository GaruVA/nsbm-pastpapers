#include <stdio.h>

int main() {
    //while
    int wrow = 1;
    while(wrow <= 5) {
        int wcol = 1;
        while(wcol <= wrow) {
            printf("*");
            wcol += 1;
        }
        printf("\n");
        wrow += 1;
    }

    //do-while
    int drow = 1;
    do {
        int dcol = 1;
        do {
            printf("*");
            dcol += 1;
        } while(dcol <= drow);
        printf("\n");
        drow += 1;
    } while(drow <= 5);
    
}
