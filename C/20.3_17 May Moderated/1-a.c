#include <stdio.h>

int main() {
    //declare variables
    float fahren, celsi;

    //input value for celsius
    printf("Enter Celsius Value: ");
    scanf("%f", &celsi);

    //calculate fahrenheit value
    fahren = celsi * (9.0/5.0) + 32.0;

    //display fahrenheit value
    printf("---------------------------------\n");
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsi, fahren);
    printf("---------------------------------\n");
}
