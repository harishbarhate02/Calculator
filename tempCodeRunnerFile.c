#include<stdio.h>
int main()
{
   float num1;
   float num2;
   char operation;
   float result;

   printf("Enter the first number:");
   scanf("%f",&num1);

   printf("Enter the operation:");
   scanf(" %c",&operation);

   printf("Enter the secoend number:");
   scanf("%f",&num2);

   switch(operation)
   {
      case '+':
      result=num1+num2;
               
      break;
       case '-':
       result=num1-num2;
   
      break;
       case '*':
       result=num1*num2;
             
      break;
       case '/':
       result=num1/num2;
             
      break;
      default:printf("No reasult");
   }
   printf("%f",result);
   return 0;
}