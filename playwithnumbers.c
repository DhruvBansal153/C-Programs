#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float fact(int a)
{
  float i,f=1;
    for(i=a;i>=1;i--)
        f=f*i;
    return f;
}
int main() {
    int n,i;
    scanf("%d",&n);
    float sum=0;
    for(i=1;i<=n;i++)
    sum=sum+(i/fact(i));
    printf("%f",sum);
    return 0;
}
