/*Write a C program to print all natural numbers in reverse (from n to 1)*/
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter numbers:");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        printf("%d\n",i);
        i--;
    }
} 