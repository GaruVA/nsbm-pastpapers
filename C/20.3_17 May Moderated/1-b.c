#include <stdio.h>

int main() {
    //declare variable
    int num;

    //input value
    printf("Enter Value: ");
    scanf("%d", &num);

    //checking number divisible by 5 and 11
    printf("---------------------------------\n");
    if(num%5==0 && num%11==0) {
        printf("%d is divisible by 5 and 11.\n", num);
    } else {
        printf("%d is not divisible by 5 and 11.\n", num);
    }
    printf("---------------------------------\n");
}
