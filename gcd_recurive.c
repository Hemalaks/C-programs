#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b,result;
    printf("enter the two numbers to find their gcd :");
    scanf("%d %d",&a,&b);
    result =gcd(a,b);
    printf("the gcd of %d and %d is %d",a,b,result);
}
int gcd (int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,b);
        }
        else
        {
            return gcd (a,b-a);
        }
    }
    return a;
}

