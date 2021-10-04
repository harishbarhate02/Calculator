#include<stdio.h>
int main()
{
   float num1;
   float num2;
   char operation;
   float result;

   printf("Enter the first number and second number:");
   scanf("%f%f",&num1,&num2);

   printf("Enter the operation:");
   scanf(" %c",&operation);

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
       case '%'
       result=num1%num2;
             
      break;
       case '&'
        result=num1&num2;
         break;
         
      default:printf("Error! operator is not correct");
   }
   printf("%f",result);
   return 0;
}
