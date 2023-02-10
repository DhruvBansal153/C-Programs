/* Enter marks of 5 subjects and calculate the total marks, average marks and percentage. */
#include<stdio.h>
void main()
{
    float a,b,c,d,e;
    printf("Enter Marks of First Subject:");
    scanf("%f",&a);
    printf("Enter Marks of Second Subject:");
    scanf("%f",&b);
    printf("Enter Marks of Third Subject:");
    scanf("%f",&c);
    printf("Enter Marks of Forth Subject:");
    scanf("%f",&d);
    printf("Enter Marks of Fifth Subject:");
    scanf("%f",&e);
    printf("Total Marks:%.2f\n",a+b+c+d+e);
    printf("Average:%.2f\n",(a+b+c+d+e)/5);
    printf("Percentage:%.2f",(a+b+c+d+e)*100/500);
}