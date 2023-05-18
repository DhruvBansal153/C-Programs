#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h,m;
    scanf("%d %d",&h,&m);
    if(h>=4 && h<=11)
    {printf("Good Morning");}
    else if(h>=12 && h<=15)
    {printf("Good AfterNoon");}
    else if(h>=16 && h<=20)
    {printf("Good Evening");}
    else if(h>=21 && h<=23)
    {printf("Good Night");}
    return 0;
}