#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int prime(int n)
{
    int i,count=0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==1)
    return 1;
    else
    return 0;
}
int main() {
    int x,y,z,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        for(int j=1;;j++)
        {
            z=j;
            int k=x+y+z;
            if(prime(k))
            {
                 printf("%d\n",z);
                 break;
            }
               
            else
                continue;
        }
    }
    return 0;
}
