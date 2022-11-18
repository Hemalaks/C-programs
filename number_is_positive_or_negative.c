 #include<stdio.h>
 int main()
 {
     int number;
     printf("enter number\n");
     scanf("%d",&number);

     if(number > 0)
     {
         printf("number is positive");
     }
     else if(number < 0)
     {
         printf("number is negative");
     }
     else
     {
         printf("number is 0");
     }
     return 0;
 }
