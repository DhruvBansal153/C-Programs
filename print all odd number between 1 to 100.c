/*5.Write a C program to print all odd number between 1 to 100.*/
#include<stdio.h>
void main()
{
    int n,i;
    i=1;
    while(i!=101)
    {
        if(i%2==0)
        printf("%d\n",i-1);
        i++;
    }
} 