#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,i,max=0,max2=0;
    scanf("%d",&m);
    int a[m];
        for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        for(i=0;i<m;i++)
        {
            if(max<a[i])
            {max2=max;
            max=a[i];}
            else if((a[i]<max)&&(max2<a[i]))
            max2=a[i];
        }
    printf("%d %d",max,max2);
    return 0;
}