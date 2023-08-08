#include <stdio.h>

int main() {
    //declare two arrays and other variables
    int arr1[10], arr2[10];
    int max, min;

    //input value to first array
    printf("Array 1:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    //input value to first array
    printf("Array 2:\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }


    //we will be taking the maximum of the 1st array and minimum of the 2nd array
    //calculating the max and min through the reverse array printing loop
    max = arr1[9];
    min = arr2[9];

    printf("---------------------------------\n");
    //display first array in reverse
    printf("Reverse of Array 1: {");
    for(int i = 9; i >= 0; i--) {
        if(max < arr1[i]){
            max = arr1[i];
        }
        printf("%d", arr1[i]);
        if(i != 0) {
            printf(", ");
        } else {
            printf("}\n");
        }
    }

    //display second array in reverse
    printf("Reverse of Array 2: {");
    for(int i = 9; i >= 0; i--) {
        if(min > arr2[i]) {
            min = arr2[i];
        }
        printf("%d", arr2[i]);
        if(i != 0) {
            printf(", ");
        } else {
            printf("}\n");
        }
    }
    printf("---------------------------------\n");

    //display max and min
    printf("Maximum of Array 1: %d\n", max);
    printf("Minimum of Array 2: %d\n", min);

    printf("---------------------------------\n");
}
