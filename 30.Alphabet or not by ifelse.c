#include<stdio.h>
void main()
{
    char a;
    printf("Enter number:");
    scanf("%c",&a);
    if (isalpha(a))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not");
    }
} 