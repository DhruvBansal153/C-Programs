#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d is greatest",a);
    }
    else
    {
        printf("%d is greatest",b);
    }
}