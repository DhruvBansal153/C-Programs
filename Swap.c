#include <stdio.h>

void saw(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a=8;
    int b=5;
    saw(&a,&b);
    printf("%d%d",a,b);
    return 0;
}