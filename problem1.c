#include<stdio.h>
int main(){
    // Declaration of age and height according to requirements
    int age;
    float height;

    // Asking user to enter age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Asking user to enter height
    printf("Enter your Height: ");
    scanf("%f", &height);

    // Printing in required format
    printf("your age is %d and you height is %.2f ", age, height);
}