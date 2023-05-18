#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<=i;j++)
    {
        if(i%j==0)
        count++;}
        if(count==1)
        {printf("%d,",i);}
        count=0;
    }
    return 0;
}
