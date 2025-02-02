/**
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;
   printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
 
  getchar(); 

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();
  if(c == 'y' || c == 'Y') {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  
  if (agi <= 50000)
  {
    tax = agi * 0.10;
  }
  else if (agi <= 100000)
  {
    tax = 5000 + (agi - 50000) * 0.20;
  }
   {
    tax = 15000 + (agi - 100000) * 0.30;
  }

 
  if (numChildren > 0)
  {
    childCredit = numChildren * 1000;
  }

  totalTax = tax - childCredit;
  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
