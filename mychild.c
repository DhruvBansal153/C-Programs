#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char a[1000000],b[1000000];
        scanf("%s %s",a,b);
        int d=strlen(b),c=0;
        for(int j=0;a[j];j++)
        {
           if(a[j]==b[0])
           {
               c=0;
               for(int k=0;k<d;k++)
               {
                   if(a[j+k]==b[k])
                   c++;
               }
           }
            if(c==d)
                   break;
        }
        if(c==d)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}