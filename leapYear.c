/**
 * This program determines if various years are leap
 * years or not.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Returns true (1) if the given year is a leap year,
 * false (0) if it is not a leap year.
 */
int isLeapYear(int year);

int main(int argc, char **argv) {

  bool reportPass = false;
  if(argc > 1 && strcmp(argv[1], "-reportPass") == 0) {
    reportPass = true;
  }

  int year;
  int numPassed = 0;
  int numFailed = 0;

  //Hard-coded ad-hoc test cases
  //Do not change these, add your own test cases
  //below.  All test cases should pass.

  year = 2000;
  printf("Test Case 1: year = %d: ", year);
  if(!isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2001;
  printf("Test Case 2: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2100;
  printf("Test Case 3: year = %d: ", year);
  if(isLeapYear(year)) {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  } else {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  //TODO: write *at least* 3 more of your own
  //      test cases here, they should all pass!
  year = 1999;
  printf("Test Case 4: year = %d: ", year);
  if (!isLeapYear(year))
  {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  }
  else
  {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2012;
  printf("Test Case 5: year = %d: ", year);
  if (isLeapYear(year))
  {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  }
  else
  {
    printf("PASSED!\n");
    numPassed = numPassed + 1;
  }

  year = 2022;
  printf("Test Case 6: year = %d: ", year);
  if (isLeapYear(year))
  {
    printf("FAILED!\n");
    numFailed = numFailed + 1;
  }
  