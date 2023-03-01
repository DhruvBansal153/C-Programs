#include<stdio.h>
void main()
{
    int a;
    printf("Enter Year:");
    scanf("%d",&a);
    if (((a%4==0)&&(a%100!=0))||(a%400==0))
    {
        printf("Leap");
    }
    else
    {
        printf("Not");
    }
} 