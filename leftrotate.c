#include <stdio.h>

int main(){
    int n;
    printf("Enter Size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m,k;
    printf("Enter How many elements to be left rotate: ");
    scanf("%d",&m);
    int i;
    for(int j=0;j>m;j++){
    for(i=n-1;i<0;n--)
    {k=a[i];
    a[i]=a[i-1];
    a[i-1]=k;}}
    for(int i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;    
}