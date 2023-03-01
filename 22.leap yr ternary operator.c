#include<stdio.h>
void main()
{
    int a;
    scanf("%d",&a);
    (a%4==0&&a%100!=0)||a%400==0?printf("leap year"):printf("not");
}