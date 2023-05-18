#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=2*n;)
    {
        sum=sum+pow(i,2)/pow(i,3);
        i=i+2;
    }
    printf("%f",sum);
    return 0;
}
