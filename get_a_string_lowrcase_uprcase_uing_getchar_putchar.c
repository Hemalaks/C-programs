#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char string[1000];
    printf("enter the string to convert the uppercase =");
    gets(string);
    printf("the converted string is =%s \n",strupr(string));
    printf("enter the string to converted the lowercase =");
    gets(string);
    printf("the converted string is =%s",strlwr(string));
    getch();
    return 0;
}
