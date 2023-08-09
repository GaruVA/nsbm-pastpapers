#include <stdio.h>

int main() {
    //The question seems to be wrong, lets make x = 20 instead of z = 20
    //1. Declare integer variables x, y, z and assign the value 10 in the y and 20 in the x.
    int x = 20, y = 10, z;

    //2. Increment the variables x, y by one and assign the sum in z.
    z = ++x + ++y;

    //3. Assign the difference of x, y in z and increment the variables x, y by one.
    z = x++ - y++;

    //4. Increment the value x by one and assign the value in z.
    z = ++x;

    //5. Display the values of x, y, and z.
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    return 0;
}
