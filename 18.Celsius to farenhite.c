/* To convert temperature in celcius to Fahrenhite. */
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter Temperature in Celsius:");
    scanf("%f",&a);
    b=a*9/5+32;
    printf("Temperature in Fahrenhite is %.2f",b);
}