#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,max;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    max++;
    int b[max];
    for(int i=0;i<max;i++)
    b[i]=0;
    for(i=0;i<n;i++)
        b[a[i]]++;
    for(i=0;i<max;i++){
        if(b[i]>0)
            printf("%d=%d",i,b[i]);
    }
    return 0;
}