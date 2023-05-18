/*1.Write a C program to print all natural numbers from 1 to n. - using while loop*/
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter numbers:");
    scanf("%d",&n);
    i=1;
    while(n>=i)
    {
        printf("%d\n",i);
        i++;
    }
} 