/*Write a C program to print all even numbers between 1 to 100. - using while loop*/
#include<stdio.h>
void main()
{
    int i;
    i=1;
    while(i!=101)
    {
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }
} 