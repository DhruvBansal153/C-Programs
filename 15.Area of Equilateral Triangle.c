/* To find the area of Equilateral Triangle.*/
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b;
    printf("Enter Side of Equilateral Triangle:");
    scanf("%f",&a);
    b=sqrt(3)*pow(a,2)/4;
    printf("Area of the triangle is %.2f",b);
}