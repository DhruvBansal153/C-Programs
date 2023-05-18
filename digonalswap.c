#include <stdio.h>
int main()
{
    int x,y,i,j,t;
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
        printf("\n");
        for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(i==j)
            {
                t=a[i][j];
                a[i][j]=a[i][y-j-1];
                a[i][y-j-1]=t;
            }
        }}
        printf("Matrix digonal swapped\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
     }
        printf("\n");
return 0;
}