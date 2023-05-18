#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float s,c,p;
    scanf("%f",&c);
    scanf("%f",&s);
    if(c>s){p=(((c-s)/c)*100);printf("Loss\n%.2f%%",p);}
    else{p=(((s-c)/c)*100);printf("Profit\n%.2f%%",p);}
    return 0;
}
