#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int c=0;
    char a[10000],b;
    gets(a);
    scanf("%c",&b);
    for(int i=0;a[i];i++)
        if(a[i]==b)
            c++;
    printf("%d",c);
    return 0;
}
