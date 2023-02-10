/* To find Power of any number. */
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b;
    printf("Enter number:");
    scanf("%f",&a);
    printf("Enter power:");
    scanf("%f",&b);
    printf("%.2f to the power %.2f is %.2f",a,b,pow(a,b));
}