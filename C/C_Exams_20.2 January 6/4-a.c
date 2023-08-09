#include <stdio.h>

int main() {
    //declare and assign array
    float temp[10] = {23.3, 34.5, 40, 41.6, 23, 38, 50.1, 32,29.9, 31};
    float highest = temp[0]; //assume 1st element as highest

    //display array
    printf("---------------------------------\n");
    printf("Temperature Array: {");
    for(int i = 0; i < 10; i++) {
        printf("%.2f", temp[i]);

        //calculate highest
        if(highest < temp[i]) {
            highest = temp[i];
        }
        if(i != 9){
            printf(", ");
        } else {
            printf("}");
        }
    }
    printf("\n");
    //display highest
    printf("Highest: %.2f\n", highest);
    printf("---------------------------------\n");
}
