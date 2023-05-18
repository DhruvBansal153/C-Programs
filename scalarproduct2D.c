#include <stdio.h>
int main()
{
    int x,y,i,j,z;
    printf("Enter Number of rows");
    scanf("%d",&x);
    printf("Enter Number of cols");
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
         printf("Enter number for scalar product\n");
         scanf("%d",&z);
    printf("Matrix after product is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",z*a[i][j]);
        }
        printf("\n");
     }
    return 0;
}