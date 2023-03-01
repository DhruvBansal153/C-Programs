#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    a>b?printf("%d is maximum",a):printf("%d is maximum",b);
}