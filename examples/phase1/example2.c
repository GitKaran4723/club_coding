#include<stdio.h>
int main(){
    int num;
    printf("Enter a  number: ");
    scanf("%d", &num);

    // check if the number is Odd
    if(num%2 == 1){
        printf("This is a odd number");
    }else{
        printf("This is a not a odd number");
    }
}