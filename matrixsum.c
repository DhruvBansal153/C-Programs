#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n,sum=0,p=1,i,j;
    scanf("%d %d",&m,&n);
    int a[m][n];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {sum=sum+a[i][j];
            p=p*a[i][j];}
        }
    printf("%d %d",sum,p);
    return 0;
}