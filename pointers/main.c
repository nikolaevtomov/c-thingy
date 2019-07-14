#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void square(int * x);

int main() {
  int num = 150;
  int * pNum = NULL;
  pNum = &num;

  printf("Value of num: %i\n", num);
  printf("Address of num: %p\n", &num);
  printf("Value of pNum: %p\n", pNum);
  printf("Address of pNum: %p\n", &pNum);
  printf("Value at pNum pointing to: %d\n\n", *pNum);

  // dynamic memory allocation
  int *someNumber = (int *)malloc(sizeof(int));
  *someNumber = 4;
  // pass by reference
  square(someNumber);
  printf("The value of someNumber: %d\n\n", *someNumber);

  return 0;
}

void square(int * x) {
  *x = (*x) * (*x);
}
