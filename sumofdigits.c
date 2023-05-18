#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,a,r,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a);
     while(a!=0)
     {
         r=a%10;
         a=a/10;
         sum=sum+r;
         
     }
     printf("%d\n",sum);
     sum=0;
    }
    return 0;
}
