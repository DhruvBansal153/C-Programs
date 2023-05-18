#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum=sum+i;
    printf("%d",sum);
    return 0;
}
