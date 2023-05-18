#include <stdio.h>
int main()
{
    int x,y,i,j;
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
         printf("Enter Elements of 2nd matrix");
    int b[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    printf("Matrix 2 is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
     }
     printf("\n");
     printf("Difference of matrice is \n");
     int c[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            c[i][j]=a[i][j]-b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}