/* To find the third angle of triangle. */
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter First angle:");
    scanf("%f",&a);
    printf("Enter Second angle:");
    scanf("%f",&b);
    printf("Third angle of the triangle is %.2f",180-a-b);
}