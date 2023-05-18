#include <stdio.h>
int main()
{
    int x,y,i,j,p,q,k;
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
        printf("Enter Number of rows 2nd matrix");
        scanf("%d",&p);
        printf("Enter Number of cols 2nd matrix");
        scanf("%d",&q);
         printf("Enter Elements of 2nd matrix");
    int b[p][q];
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
     if(y==p){
     printf("\n");
     printf("product of matrice is \n");
     int c[x][q];
    for(i=0;i<x;i++){
        for(j=0;j<q;j++){
            c[i][j]=0;
            for(k=0;k<p;k++)
            {c[i][j]=a[i][k]*b[k][j]+c[i][j];}
        
        printf("%d ",c[i][j]);
        }
    printf("\n");
    }
    }
    else{
        printf("product not possible");
    }
    return 0;
}