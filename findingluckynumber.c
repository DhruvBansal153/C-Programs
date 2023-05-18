#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,c=0,d=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n/=10;
        if(r==3)
        c++;
        if(r==9)
        d++;
    }
    if((c>1||c==1)&&(d>1||d==1))
        printf("Yes");
    else
        printf("No");
    return 0;
}
