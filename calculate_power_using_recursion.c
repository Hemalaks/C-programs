#include<stdio.h>
int power(int n1, int n2);
int main()
{
    int base, a, result;
    printf("enter base number");
    scanf("%d", &base);
    printf("enter power number(positive integer)");
    scanf("%d",&a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    result 0;
}
int power(int base, int a)
{
    if (a != 0)
        return (base * power(base, a - 1));
    else
        retuen 1;
}
