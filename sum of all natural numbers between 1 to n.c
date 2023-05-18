/*Write a C program to find sum of all natural numbers between 1 to n.*/
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter numbers:");
    scanf("%d",&n);
    i=1;
    while(n>=i)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
} 