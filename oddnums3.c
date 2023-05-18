#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;)
    {
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}
