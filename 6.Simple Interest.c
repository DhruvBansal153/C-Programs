/* To find Simple Interest */
#include<stdio.h>
void main()
{
    float P,R,T,SI;
    scanf("%f%f%f",&P,&R,&T);
    SI=(P*R*T)/100;
    printf("SimpleInterest is %.2f",SI);
}
