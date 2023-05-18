/*11.Write a C program to find first and last digit of a number.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i,a,r,k,t,p;
    scanf("%d",&a);
    r=a%10;
    k=log10(a);
    t=pow(10,k);
    p=a/t;
    printf("First digit %d Last Digit %d sum is %d",p,r,p+r);
} 