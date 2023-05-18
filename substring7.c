#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
        char a[10000],b[10000];
        gets(a);
        gets(b);
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
            printf("1\n");
        else
            printf("0\n");
    return 0;
}