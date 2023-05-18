#include<limits.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n); 
    int a[n],i,max1,max2;
    printf("enter elements of an array"); 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max1=INT_MIN;
    max2=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if((a[i]<max1)&&(max2<a[i])){
            max2=a[i];
        }
    }
    printf("%d",max2);
    return 0;
}