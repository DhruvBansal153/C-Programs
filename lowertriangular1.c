#include <stdio.h>
int main()
{
    int x,y,i,j,count=0;
    printf("Enter Number of rows 1st matrix");
    scanf("%d",&x);
    printf("Enter Number of cols 1st matrix");
    scanf("%d",&y);
    printf("Enter Elements of 1st matrix");
    int a[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 1 is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
    for(i=1;i<x;i++){
        for(j=0;j<i-1;j++){
            if(a[i][j]==0)
            
        }}
}