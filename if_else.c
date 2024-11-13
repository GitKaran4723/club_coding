#include<stdio.h>

int main(){
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("entered age is %d\n\n\n",age);

    // printf("condition value %d",age >= 18);

    if(age >= 18){
        printf("You are eligible to vote");
    }else{
        printf("You are not eligible to vote");
    }
}