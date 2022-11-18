#include<stdio.h>//it includes print and scanf
#include<conio.h>
int square(int);
void main()
{
    int n,r;
    printf("enter the number");
    scanf("%d",&n);
    r=square(n);
    printf("square value is = %d",r);
    getch();
}
int square(int a)
{
    return(a*a);
}



