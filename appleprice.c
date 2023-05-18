#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",(b/a)*c);}
    return 0;
}
