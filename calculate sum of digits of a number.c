/*14.Write a C program to calculate sum of digits of a number.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,r,sum=0;
    scanf("%d",&a);
    while(a!=0)
   { r=a%10;
    a=a/10;
    sum=sum+r;
} 
printf("%d",sum);
}