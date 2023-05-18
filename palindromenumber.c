#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,r,rev=0;
    scanf("%d",&n);
    int a=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(rev==a)
    printf("Palindrome.");
    else
    printf("Not Palindrome.");
    return 0;
}
