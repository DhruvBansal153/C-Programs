/*10.Write a C program to count number of digits in a number(using log).*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i=0,a;
    scanf("%d",&a);
    i=log10(a)+1;
    printf("%d\n",i);
} 