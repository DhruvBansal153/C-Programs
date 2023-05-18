#include <stdio.h>

int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);

    int a[n];
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    int pos,k;
    printf("Enter element and position: ");
    scanf("%d%d",&k,&pos);
    for(int i=m-1;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=k;
    m--;
    for(int i=0;i<9;i++)
    printf("%d,",a[i]);
    return 0;
    
}