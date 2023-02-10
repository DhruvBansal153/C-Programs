/* To convert temperature in Fahrenhite to celcius. */
#include<stdio.h>
void main()
{
    float a,b;
    printf("Enter Temperature in Fahrenhite:");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("Temperature in Celcius is %.2f",b);
}