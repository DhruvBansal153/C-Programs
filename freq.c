#include <stdio.h>

int main(){
    int n;
    printf("Enetr number");
    scanf("%d",&n);
    for(int i=0;i<=9;i++){
        int t=n;int f=0;
        while(t!=0){
            int d=t%10;
            if(d==i)
            f++;
            t/=10;
        }
        if(f!=0)
        printf("Frequency of %d is %d \n",i,f);
    }
    return 0;
}