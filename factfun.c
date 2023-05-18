#include<stdio.h>
int fact(int a)
{
    if(a>1)
    return fact(a-1)*a;
}
int main()
{
  int n,f;
  scanf("%d",&n);
  f=fact(n);
  printf("%d",f);
  return 0;
}