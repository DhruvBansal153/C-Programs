#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float p,r,c,t;
    scanf("%f%f",&p,&r);
    c=p*pow(1+r*0.01,2);
    t=c-p;
    printf("%.2lf",t);
    return 0;
}
