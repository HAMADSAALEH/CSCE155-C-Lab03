/**
 * Author:
 * Date:
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    if(a<0||b<0){
    printf("ERROR: Both operands must be positive");
  } else {
    result= a+b;
    printf("%.2lf + %.2lf = %.2lf",a,b, result);
    }
}
    else if(choice == 2) {
    result = a - b;
    printf("%.2lf", result);
  } else if(choice == 3) {
    result= a*b;
    printf("%.2lf * %.2lf = %.2lf",a,b, result);
  } else if(choice == 4) {
    if(b==0)
    {
      printf("ERROR: Division by zero");
    }
    else
    {
      result=a/b;
      printf("%.2lf / %.2lf = %.2lf",a,b, result);

      }
    
  } 
  else if(choice == 5) 
  {
    if(a>b){

    printf("a is greater then b");
    }
      else
{
  printf("ERROR");
}
  }
      else if(choice == 6)
       {
    result= log(a) /log(b);
    printf("log_%.2lf(%.2lf)=%.2lf",b,a,result);
  } 
  else 
  {
    printf("Please input a valid operator next time");
  }

  return 0;
}
