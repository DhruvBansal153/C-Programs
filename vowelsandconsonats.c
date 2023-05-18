#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char a[10000];
    gets(a);
    for(int i=0;a[i];i++)
    if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
        printf("%c",a[i]);
    printf("\n");
    for(int i=0;a[i];i++)
    if((a[i]!='a')&&(a[i]!='e')&&(a[i]!='i')&&(a[i]!='o')&&(a[i]!='u')&&(a[i]!='A')&&(a[i]!='E')&&(a[i]!='I')&&(a[i]!='O')&&(a[i]!='U'))
        printf("%c",a[i]);
    return 0;
}
