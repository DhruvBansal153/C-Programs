/*10.Write a C program to count number of digits in a number(using while).*/
#include<stdio.h>
void main()
{
    int i=0,a;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        i++;
    }
    printf("%d\n",i);
} 