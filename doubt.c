#include<stdio.h>
#include<math.h>
void main()
{
    int **q,*q,b=5;
    *q=&b;
    printf("%d",**q);
} 