#include<stdio.h>
int main()
{
    char op;
    double first,second;
    printf("enter an operter(+,-,*,/):");
    scanf("%c",&op);
    printf("enter the operands");
    scanf("%lf %lf",&first, &second);

    switch(op)
    {
    case'+':
     printf("%.1lf + %.1lf = %.1lf",first,second,first+second);
     break;
    case'-':
     printf("%.1lf - %.1lf = %.1lf",first,second,first-second);
     break;
    case'*':
     printf("%.1lf * %.1lf = %.1lf",first,second,first*second);
     break;
    case'/':
     printf("%.1lf / %.1lf = %.1lf",first,second,first/second);
     break;

    default:
        printf("error! operator is not correct");
    }
    return 0;
}

