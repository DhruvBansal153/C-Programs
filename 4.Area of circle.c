/* To find diameter, circumference, area of circle. */
#include<stdio.h>
void main()
{
    float r=5.3,a;
    a=3.14*r*r;
    printf("Diameter of circle is %.2f\n",2*r);
    printf("Circumference of circle is %.2f\n",2*3.14*r);
    printf("Area of circle is %.2f",a);
}