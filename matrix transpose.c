#include <stdio.h>
int main()
{
    int x,y,i,j;
    printf("Enter Number of rows");
    scanf("%d",&x);
    printf("Enter Number of cols");
    scanf("%d",&y);
    int a[x][y],b[x][y];
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            b[i][j]=a[i][j];
        }
    }
    printf("Matrix is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            a[i][j]=b[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Transpose is\n");
     for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
