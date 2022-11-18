#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long fact = 1;
    printf("enter a integer number =");
    scanf("%d", &n);
    if(n < 0)
        printf("error! factorial of a negative number dosen't exit");
    else
    {
        for(i = 1;i<=n;++i)
        {
            fact *=i;
        }
        printf("factorial of %d=%llu",n,fact);
    }
    return 0;
}
