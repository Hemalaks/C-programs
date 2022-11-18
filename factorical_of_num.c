#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    unsigned long long fact=1;
    printf("enter a number to calculate its factorial=");
    scanf("%d",&n);
    if(n<0)
        printf("error!-factorial of a negative number dosen't exit\n");
    else
    {
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        printf("factorial of %d = %lu\n",n,fact);
    }
    getch();
}
