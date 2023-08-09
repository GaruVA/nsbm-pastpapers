#include <stdio.h>

int main() {
    //display index number
    printf("Index No: 30161\n");

    //declare variables and assign relevant values
    int num, p = 0, n = 0, z = 0, total = 0;
    float average;

    //get user inputs
    for(int i = 0; i < 20; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &num);
        total += num;      //calculate sum to find average
        //counting positives, negatives, zeros
        if(num > 0) {
            p += 1;
        } else if(num < 0) {
            n += 1;
        } else {
            z += 1;
        }
    }

    //calculating average
    average = (float) total / 20; //converting int value to float

    //display outputs
    printf("---------------------------------\n");
    printf("Average = %.2f\n", average);
    printf("---------------------------------\n");
    printf("Positive: %d\n", p);
    printf("Negative: %d\n", n);
    printf("Zero: %d\n", z);
    printf("---------------------------------\n");
    //display index No
    printf("Index No: 30161\n");
}
