#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number to find Even or odd:");
    scanf("%d",&num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
