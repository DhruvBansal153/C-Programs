/*15.Write a C program to calculate product of digits of a number.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int a,r,p=1;
    scanf("%d",&a);
    while(a!=0)
   { r=a%10;
    a=a/10;
    p=p*r;
} 
printf("%d",p);
}