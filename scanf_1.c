#include <stdio.h>
int main()
{
    // declaring the variable
    int variable;

    printf("Enter a number");

    // using scanf to write data into variable
    scanf("%d", &variable);

    // this will print the value of the variable
    printf("My number is %d", variable);

    // this will print the address of the variable
    printf("Address of the variable is %d", &variable);
}