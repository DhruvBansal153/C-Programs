#include<stdio.h>
void swap(int,int);
void swap1(int *,int *);
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before calling func\n");
    printf("a=%d b=%d\n",a,b);
    swap(a,b);
    printf("after calling func\n");
    printf("a=%d b=%d\n",a,b);
    printf("before calling func\n");
    printf("a=%d b=%d\n",a,b);
    swap1(&a,&b);
    printf("after calling func\n");
    printf("a=%d b=%d\n",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap1(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}