#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,r=0,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n%2==0)
        {
         r++;
        }
        n=n/2;
        i++;
    }
    if(r==i-1)
        printf("1");
    else
        {
            printf("0");
        }
    return 0;
}