#include <stdio.h>

int main() {
    //declare variables
    int highest = 0, mark, total = 0, i;
    float average;

    //input marks and finding the total and highest
    for(i = 0; i < 30; i++) {
        printf("Enter Mark %d: ", i + 1);
        scanf("%d", &mark);
        total += mark;
        if(highest < mark) {
            highest = mark;
        }
    }

    //calculate average
    average =(float)total / 30; //(float) change integer to float

    //display outputs
    printf("---------------------------------\n");
    printf("Highest: %d\n", highest);
    printf("Average: %.2f\n", average);
    printf("---------------------------------\n");

}
