#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,i,max=0,c=0;
    scanf("%d",&m);
    int a[m];
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        for(i=0;i<m;i++)
        if(max<a[i])
        max=a[i];
        for(i=0;i<m;i++)
        if(a[i]==max)
        c++;
    printf("%d",c);
    return 0;
}