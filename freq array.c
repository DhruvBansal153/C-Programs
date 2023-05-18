#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n); 
    int a[n],i,j,count;
    printf("enter elements of an array"); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
    count=0;
    for(j=1;j<n;j++){
    if(a[i]==a[j]){
    count++;}
    }
    printf("frequency of %d is %d\n",a[i], count);
    a[i]=0;
    }
    return 0;
}