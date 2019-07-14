#include <stddef.h>
#include <stdio.h>

int main() {
  int num = 150;
  int * pNum = NULL;
  pNum = &num;

  printf("Value of num: %i\n", num);
  printf("Address of num: %p\n", &num);
  printf("Value of pNum: %p\n", pNum);
  printf("Address of pNum: %p\n", &pNum);
  printf("Value at pNum pointing to: %d\n", *pNum);

  return 0;
}
