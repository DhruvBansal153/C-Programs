#include<stdio.h>
void sum();
int sum1();
void sum2(int,int);
int sum3(int,int);
void main()
{
    int a,b,k,p;
    printf("Enter a and b");
    scanf("%d%d",&a,&b);
    sum();
    k=sum1();
    printf("%d ",k);
    sum2(a,b);
    p=sum3(a,b);
    printf("%d ",p);
}
void sum()
{
    int a=5,b=6;
    printf("%d ",a+b);
}
int sum1()
{
    int a=5,b=6;
    return(a+b);
}
void sum2(int a,int b)
{
    printf("%d ",a+b);
}
int sum3(int a,int b)
{
    return(a+b);
}