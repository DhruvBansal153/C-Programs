#include <stdio.h>
int main()
{
    int x,y,i,j;
    printf("Enter Number of rows");
    scanf("%d",&x);
    printf("Enter Number of cols");
    scanf("%d",&y);
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
        printf("\n");
    for(i=0;i<x;i++){
        int sum1=0,sum2=0;
        
        for(j=0;j<y;j++){
            sum1=sum1+a[i][j];
            sum2=sum2+a[j][i];
        }
        printf("sum of %d row is:%d\n",i+1,sum1);
        printf("sum of %d col is:%d\n",i+1,sum2);
    }
    return 0;
}