#include<stdio.h>
#include<conio.h>
//greater among three numbers.
void main()
{
    int a,b,c;

    printf("enter the 1st number : ");
    scanf("%d",&a);
    printf("enter the 2nd number : ");
    scanf("%d",&b);
    printf("enter the 3rd number : ");
    scanf("%d",&c);
    if(a>b)
{
    if(a>c)
    {
        printf("a is greater %d",a);
    }
    else
    {
        printf("c is greater %d",c);
    }
}

    if (b>c)
    printf("b is greater %d",b);

    else
    printf("c is greater %d",c);
    getch();
}

