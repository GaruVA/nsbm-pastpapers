#include <stdio.h>

int main() {
    //declare two multi dimensional arrays and other variables
    int arr1[3][3], arr2[3][3], i , j, result;

    //input values to 1st array
    printf("Array 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter Value [%d][%d]: ", i , j);
            scanf("%d", &arr1[i][j]);
        }
    }

    //input values to 2nd array
    printf("Array 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter value [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("---------------------------------\n");
    //display 1st array
    printf("Matrix form of Array 1:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%-5d", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //display 2nd array
    printf("Matrix form of Array 2:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%-5d", arr2[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------------\n");
    //display matrix substraction
    printf("Matrix Subtraction(Array 1 - Array 2):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            result = arr1[i][j] - arr2[i][j];
            printf("%-5d", result);
        }
        printf("\n");
    }
    printf("---------------------------------\n");
}
