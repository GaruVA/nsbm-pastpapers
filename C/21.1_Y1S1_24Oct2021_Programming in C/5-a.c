#include <stdio.h>

int main() {
    //declaring array and variables
    int arr[10], highest, lowest;

    //taking user inputs
    for(int i = 0; i < 10; i++) {
        printf("Enter Numbers %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    highest = arr[0];
    lowest = arr[0];

    printf("---------------------------------\n");
    printf("Prices: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
        if(highest < arr[i]) {
            highest = arr[i];
        }
        if(lowest > arr[i]) {
            lowest = arr[i];
        }
    }
    printf("\n");
    printf("Highest Price: %d\n", highest);
    printf("Lowest Price: %d\n", lowest);
    printf("---------------------------------\n");
}
