#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n;
    scanf("%d %d",&m,&n);
    if(m!=n)
    printf("Not square matrix.");
    else
    {
        int a[m][m];
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                    printf("%d",a[i][i]);
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}
