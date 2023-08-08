#include <stdio.h>

//creating a function to calculate cube
void cube(int n) {
    printf("---------------------------------\n");
    printf("%d^3 = %d\n", n, n*n*n);
    printf("---------------------------------\n");
}

int main() {
    //declare variable
    int num;

    //input value
    printf("Enter Number: ");
    scanf("%d", &num);

    //calling cube function
    cube(num);
}
