#include<stdio.h>//it includes print and scanf
#include<conio.h>//preprocessors,it include getch();
//BASIC ARTHMETIC OPERATIONS
void main()
{
    int a,b,add,sub,mul,divi;
    printf("enter first no");//output
    scanf("%d",&a);//input
    printf("enter second no");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    divi=a/b;

    printf("ADDITION = %d \n",add);
    printf("SUBTRACTION = %d \n",sub);
    printf("MULTIPLICATION = %d \n",mul);// \n represent new line
    printf("DIVISION = %d \n",divi);
    getch();
}
