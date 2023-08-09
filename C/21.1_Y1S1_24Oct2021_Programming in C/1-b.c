#include <stdio.h>

int main() {
    //A variable is a named location in memory that can store a value
    //A pointer is a variable that stores the address of another variable

    int x = 10; //x variable is storing the value 10.
    int *p = &x; //p pointer is storing the address of variable x.

    printf("x = %d\n", x);
    printf("p = %p\n", p);
}
