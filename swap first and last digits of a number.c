/*13.Write a C program to swap first and last digits of a number.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i,a,r,k,t,p,f;
    scanf("%d",&a);
    r=a%10;
    k=log10(a);
    t=pow(10,k);
    f=a/t;//first digit
    p=a%t;//digits except first digit
    a=p-r+f+r*pow(10,k);
    printf("%d",a);
} 