#include<stdio.h>
int main()
{
   double first, second, temp;
   printf("enter a first number : ");
   scanf("%lf", &first);
   printf("enter a second number : ");
   scanf("%lf", &second);

   temp = first;
   first = second;
   second = temp;

   //%.1f displays number up to  decimal points
   printf("\n after sapping,firstnumber = %.2lf\n",first);
   printf("after sapping,secondnumber = %.2lf\n",second);
   return 0;
}
