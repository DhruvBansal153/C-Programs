#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        char a[1000000];
        scanf("%s",a);
        int m=0,len;
        len=strlen(a);
        for(int j=0;j<len;j++)
        {   
            if(a[j]>a[j+1])
            {
                m=1;
                break;}
        }
        if(m)
            printf("Yes");
            else
                printf("No");
    }
    return 0;
}
