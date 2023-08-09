#include <stdio.h>

int main() {
    //declare variables
    char employeeName[20];
    int basicSalary;
    float salesAmount, grossSalary;

    //user inputs
    printf("Enter Employee Name: ");
    scanf("%s", &employeeName);

    printf("Enter Basic Salary: ");
    scanf("%d", &basicSalary);

    printf("Enter Sales Amount: ");
    scanf("%f", &salesAmount);

    //calculate commission
    if(salesAmount >= 1000) {
        grossSalary = salesAmount * 0.1;
    } else if(salesAmount >= 800) {
        grossSalary = salesAmount * 0.08;
    } else if(salesAmount >= 600) {
        grossSalary = salesAmount * 0.06;
    } else {
        grossSalary = salesAmount * 0.04;
    }

    //calculate gross salary
    grossSalary += basicSalary;

    //display name and gross salary
    printf("---------------------------------\n");
    printf("Employee Name: %s\n", employeeName);
    printf("Gross Salary: %f\n", grossSalary);
    printf("---------------------------------\n");
}
