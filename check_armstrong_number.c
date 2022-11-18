#include<stdio.h>
int main()
{
    int num = 153, rem, sum = 0, a;
    a = num;

while(num)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
if(a == sum)
    {
        printf("%d is armstrong number\n",a);
    }
else
{
    printf("%d is not armstrong number\n",a);
}
return 0;
}
