#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T,a,b,c;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
    scanf("%d %d %d",&a,&b,&c);
        if(a+b+c==180){
    printf("YES\n");}
        else if(a+b+c!=180){printf("NO\n");}}
    return 0;
}
