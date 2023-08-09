#include <stdio.h>


//creating a function
int highest(int a, int b, int c) {
    int h = a; //assuming highest is a
    if(h < b) {
        h = b;
    }
    if(h < c) {
        h = c;
    }
    return h;
}

int main() {
    //displaying index No
    printf("Index No: 30161\n");

    //declaring variables
    int n1, n2, n3;

    //taking user inputs
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    //displaying output
    printf("---------------------------------\n");
    printf("Highest: %d\n", highest(n1, n2, n3));
    printf("---------------------------------\n");

    //displaying index No
    printf("Index No: 30161\n");
}
