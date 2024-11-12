#include <stdio.h>

int main()
{
    // declaration
    int a, b, sum;

    // taking first input input from user
    printf("Enter the first numer:");
    scanf("%d", &a);

    // taking second input input from user
    printf("Enter the second numer:");
    scanf("%d", &b);

    // operation
    sum = a + b;

    // printing
    printf("Sum is %d", sum);
}