#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a num: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("sum of %d numbers is %d", n, sum);
}