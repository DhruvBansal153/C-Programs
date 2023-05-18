#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,sum=0,r,r2=0;
    scanf("%d",&a);
    while(a!=0)
        {
            r=a%10;
            a/=10;
            sum=sum+r;
        if(sum>10)
        {
            r2=sum%10;
            sum/=10;
            sum=sum+r2;
        }
        }
    printf("%d",sum);
    return 0;
}
