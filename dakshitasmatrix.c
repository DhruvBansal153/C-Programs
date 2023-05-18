#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int a[5][5],i,j,r=2,c=2;
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    if(a[2][2]==1)
    {
        printf("0");
    }
    else
    {
        for(i=0;i<5;i++)
            for(j=0;j<5;j++)
            {
                if(a[i][j]==1)
                {
                    r=i;
                    if(r<2)
                        r=4-r;
                    c=j;
                    if(c<2)
                        c=4-c;
                }
            }
        printf("%d",c+r-4);
    }
    return 0;
}