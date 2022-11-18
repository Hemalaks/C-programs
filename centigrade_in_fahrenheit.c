#include<stdio.h>//it includes print and scanf
#include<conio.h>//preprocessors,it include getch();
void main()
{
    float celsius,fahrenheit;

    printf(" \n enter the temperature in celsius : ");
    scanf("%f",&celsius);

    //convert the temperature from celsius to fahrenheit
    fahrenheit=(1.8 * celsius)+32;
    //fahrenhiet = ((9/5)*celsius)+ 32;
    //fahrenhiet = (1.8* celsius)+32;

    printf("\n temperature in fahrenhiet : %f",fahrenheit);
    getch();
}
