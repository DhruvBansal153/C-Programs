/* Calculate the compound interest. */
#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,ci;
    printf("Enter Principle amount: ");
    scanf("%f",&p);
    printf("Enter Rate of Interest amount: ");
    scanf("%f",&r);
    printf("Enter Time Period amount: ");
    scanf("%f",&t);
    ci= p*pow((1+r/100),t);
    printf("Compound Interest is: %.2f",ci);
}