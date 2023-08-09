#include <stdio.h>

void factorial(int n) {
    //declare variables
    int facto = 1;

    //calculating factorial
    for(int i = 2; i <= n; i++) {
        facto *= i;
    }

    //Display factorial
    printf("---------------------------------\n");
    printf("Factorial of %d: %d\n", n, facto);
    printf("---------------------------------\n");

}

int main() {
     //declare variables
    int num;

    //user inputs
    printf("Enter Number: ");
    scanf("%d", &num);

    //calling function
    factorial(num);


}
