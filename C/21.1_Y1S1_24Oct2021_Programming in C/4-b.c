#include <stdio.h>


//creating a function
void pnz(int n) {
    printf("---------------------------------\n");
    if(n > 0) {
        printf("%d is Positive.\n", n);
    } else if(n < 0) {
        printf("%d is Negative.\n", n);
    } else {
        printf("%d is Zero.\n", n);
    }
    printf("---------------------------------\n");
}

int main() {
    //displaying index No
    printf("Index No: 30161\n");

    //declaring variables
    int n1;

    //taking user inputs
    printf("Enter Numbers: ");
    scanf("%d", &n1);

    //calling function
    pnz(n1);

    //displaying index No
    printf("Index No: 30161\n");
}
