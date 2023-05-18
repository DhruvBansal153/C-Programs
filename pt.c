#include<stdio.h>
void main()
{
    int a=5,*p,k;
    p=&a;
    printf("%d\n",p);
    k=*p++;
}