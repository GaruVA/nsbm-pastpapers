#include <stdio.h>

int main() {
    //declare and assign array
    int arr[4][4];

    //input numbers
    for(int i = 0; i < 4;  i++) {
        for(int j = 0; j < 4; j++) {
            printf("Enter Number [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }


    //display All the values
    printf("---------------------------------\n");
    printf("All the Values:\n");
    for(int i = 0; i < 4;  i++) {
        for(int j = 0; j < 4; j++) {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    //display diagonal values
    printf("Diagonal Values:\n");
    for(int i = 0; i < 4;  i++) {
        printf("%-5d", arr[i][i]);
    }
    printf("\n");


    printf("---------------------------------\n");
}
