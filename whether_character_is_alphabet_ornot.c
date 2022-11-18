#include<stdio.h>
int main()
{
    char c;
    printf("enter character\n");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    printf("%c this is alphabet");

    else
    {
        printf("%c this is not alphabet");
    }
    return 0;
}
