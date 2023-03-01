#include<stdio.h>
void main()
{
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    if (a%5==0&&a%11==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
} 