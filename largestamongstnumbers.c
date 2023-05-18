#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c,big;
    scanf("%d %d %d", &a, &b, &c) ;
    big=a>b?(a>c?a:c):(b>c?b:c) ;
    printf("%d",big) ;
    return 0;
}
