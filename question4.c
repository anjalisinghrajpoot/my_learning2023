#include<stdio.h>
#include<conio.h>

/*
Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.

*/
int main(){
int num1,num2;
char operator;
int res;
printf("Enter Number1: ");
scanf("%d",&num1);
printf("enter operator: ");
scanf("%s", &operator);
printf("Enter Number2: ");
scanf(" %d",&num2);

switch (operator)
{
    case '+':  printf("sum is %d + %d = %d",num1,num2,num1+num2);
    break;
//case /* constant-expression */:
    /* code */
  //  break;
    case '-':  printf("sub is %d - %d = %d",num1,num2,num1-num2);
    break;
     case '*':  printf("Mul is %d * %d = %d",num1,num2, num1*num2 );
    break;
     case '/':  printf("sum is %d / %d = %d",num1,num2,num1/num2);
    break;
default:
    break;
}


}