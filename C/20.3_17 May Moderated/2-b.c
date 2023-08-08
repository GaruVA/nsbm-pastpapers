#include <stdio.h>

//creating a function to calculate cube
void feverlevel(int n) {
    printf("---------------------------------\n");
    if(n < 100) {
        printf("No fever\n");
    } else if(n <= 101) {
        printf("Low-grade fever\n");
    } else if(n == 102) {
        printf("Intermediate grade\n");
    } else if(n <= 104) {
        printf("High-grade fever\n");
    } else {
        printf("Dangerous fever\n");
    }
    printf("---------------------------------\n");
}

int main() {
    //declare variable
    int fahren;

    //input value
    printf("Enter Temperature Level(F): ");
    scanf("%d", &fahren);

    //calling function
    feverlevel(fahren);
}
