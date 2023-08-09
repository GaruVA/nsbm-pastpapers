#include <stdio.h>

int main() {
    //declare variables
    int mark;
    int count[4] = {0};
    int grade[4] = {'A', 'B', 'C', 'F'};
    int grades[4] = {80, 60, 40, 0};

    //input marks
    for(int i = 0; i < 30; i++) {
        printf("Enter Mark %d: ", i + 1);
        scanf("%d", &mark);
        //counting
        for(int j = 0; j < 4; j++) {
            if(mark >= grades[j]) {
                count[j]++;
                break;
            }
        }
    }
    //display outputs
    printf("---------------------------------\n");
    for(int i = 0; i < 4; i++) {
        printf("%c - %d\n", grade[i], count[i]);
    }
    printf("---------------------------------\n");
}
