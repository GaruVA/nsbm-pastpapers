#include <stdio.h>

int main() {
    //declaring variables
    int n1, n2, op;

    //getting user inputs
    printf("Enter two numbers ");
    scanf("%d %d", &n1, &n2);
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
    printf("Enter the arithmetic operator (1-4) and 5 to exit ");
    scanf("%d", &op);

    //calculating
    printf("---------------------------------\n");
    switch(op) {
        case 5: printf("Program Ended\n"); break;
        case 1: printf("%d + %d = %d\n", n1, n2, n1 + n2); break;
        case 2: printf("%d - %d = %d\n", n1, n2, n1 - n2); break;
        case 3: printf("%d * %d = %d\n", n1, n2, n1 * n2); break;
        case 4: printf("%d / %d = %.2f\n", n1, n2, (float)n1 / n2); break;
    }
    printf("---------------------------------\n");
}
