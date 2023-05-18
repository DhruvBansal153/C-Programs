#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a[18]={0},i=0,max=0,m2=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(i=0;i<18;i++)
    {
        if(a[i])
            max++;
        if(m2<=max)
            m2=max;
        if(a[i]==0)
            max=0;
    }
    printf("%d",m2);
    return 0;
}
