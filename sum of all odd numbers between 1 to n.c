/*Write a C program to find sum of all odd numbers between 1 to n.*/
#include<stdio.h>
void main()
{
    int i,n,s=0;
    scanf("%d",&n);
    i=1;
    while(i!=n+1)
    {
        if(i%2!=0)
        s=s+i;
        i++;
    }
    printf("%d\n",s);
} 