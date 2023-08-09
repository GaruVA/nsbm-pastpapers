#include <stdio.h>

int factorial(int n) {
    if(n == 1)
        return n;
    return n * factorial(n-1);


}

int main() {
     //declare variables
    int num;

    //user inputs
    printf("Enter Number: ");
    scanf("%d", &num);

    //calling function
    printf("---------------------------------\n");
    printf("Factorial of %d: %d\n", num, factorial(num));
    printf("---------------------------------\n");
}


/*Recursive function is when a function calls itself*/
