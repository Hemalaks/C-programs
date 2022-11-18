#include<stdio.h>
#include<conio.h>
int main()
{
    int c=0,count =0;
    char s[1000];
    printf("input a string \n");
    gets(s);
    while(s[c]!= '\0')
    {
        if( s[c] == 'a' ||
            s[c] == 'e' ||
            s[c] == 'i' ||
            s[c] == 'o' ||
            s[c] == 'u' ||
            s[c] == 'A' ||
            s[c] == 'E' ||
            s[c] == 'I' ||
            s[c] == 'O' ||
            s[c] == 'U'  )

            count++;
            c++;
    }
    printf("number of vowels in the string =%d",count);
    getch();
    return 0;
}

