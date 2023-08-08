#include <stdio.h>

int main() {
    //declare arrays and variables
    int count[5] = {0}, mark;
    char grade[5] = {'A', 'B', 'C', 'S', 'F'};
    int grades[5] = {75, 65, 55, 45, 0};

    for(int i = 0; i < 50; i++) {
        //input mark
        printf("Enter Mark %d: ", i + 1);
        scanf("%d", &mark);

        //counting
        for(int j = 0; j < 5; j++) {
            if(mark >= grades[j]) {
                count[j]++;
                break;
            }
        }
    }

    //display the count
    printf("---------------------------------\n");
    for(int i = 0; i < 5; ++i) {
        printf("%c - %d\n", grade[i], count[i]);
    }
    printf("---------------------------------\n");
}
