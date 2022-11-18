#include<stdio.h>
int main()
{
    char c;
    printf("enter u to display unpercase alphabets \n");
    printf("enter l to display lowercase alphabets \n");
    scanf("%c", &c);
    if(c=='u'|| c=='U')
    {
        for(c='A'; c<='Z';++c)
        {
            printf("%c",c);
        }
    }
    else if(c=='l' || c=='L')
    {
        for(c='a'; c<='z';++c)
        {
            printf("%c",c);
        }
    }
    else
    {
        printf("error! you entered an invalid character");
    }
    return 0;
}
