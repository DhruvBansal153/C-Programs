/* To convert days to weeks, months and years */
#include<stdio.h>
void main()
{
    float a;
    printf("Enter number of days:");
    scanf("%f",&a);
    printf("Number of Weeks in %.0f days:%.2f\n",a,a/54);
    printf("Number of Months in %.0f days:%.2f\n ",a,a/30);
    printf("Number of Years in %.0f days:%.2f",a,a/365);
}