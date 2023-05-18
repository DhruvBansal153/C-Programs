#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int p,r,t;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    printf("%d",(p*r*t/100)+p);
    return 0;
}
