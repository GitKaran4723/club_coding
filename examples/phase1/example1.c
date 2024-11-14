#include<stdio.h>
void main(){
    int num, sum1 = 0, sum2 = 0, sum3;
    printf("Enter a number: ");
    scanf("%d",&num);

    int i;


    // method i to find the sum of n even numbers
    for( i=1 ; i <= num*2 ; i++){
        if(i%2 == 0){
            sum1 = sum1 + i;
        }
    }

    // method 2 to find sum of n even numbers
    for( i=1 ; i <= num ; i++){
        sum2 = sum2 + i*2;
    }

    // formula to find sum of n even numbers
    sum3 = num*(num + 1);

    printf("The sum of first %d even numbers is %d\n", num, sum1);
    printf("The sum of first %d even numbers is %d\n", num, sum2);
    printf("The sum of first %d even numbers is %d", num, sum3);

}