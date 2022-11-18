#include<stdio.h>
int main()
{
    int divident,divisor,quotient,remainder;
    printf("enter divident");
    scanf("%d",&divident);
    printf("enter divisor");
    scanf("%d",&divisor);

    quotient = divident / divisor;
    remainder = divident % divisor;
    printf("quotient =%d\n",quotient);
    printf("remainder =%d\n",remainder);
    return 0;
}
