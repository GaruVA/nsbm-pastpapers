#include <stdio.h>

void highest() {
    //declare variables
    int n1, n2, n3, h;

    //user inputs
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    //calculating highest
    h = n1;   //assuming n1 as highest
    if(h < n2)
        h = n2;
    if(h < n3)
        h = n3;

    //Display highest
    printf("---------------------------------\n");
    printf("Highest: %d\n", h);
    printf("---------------------------------\n");

}

int main() {
    highest();
}
