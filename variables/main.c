#include <stdio.h>
#include <stdbool.h>

int main()
{
  int decimal = 5;
  float floatN = 2.3;
  double longFloat = 8.4e+11;
  char aChar = 'A';
  _Bool myBool = 0;
  bool boolean = true;

  printf("Integer:   %i,  address: %p\n", decimal, &decimal);
  printf("Float:     %.2f,  address: %p\n", floatN, &floatN);
  printf("Double:    %e, %g, address: %p\n", longFloat, longFloat, &longFloat);
  printf("Character: %c,  address: %p\n", aChar, &aChar);
  printf("Boolean:   %i,  address: %p\n", myBool, &myBool);
  printf("Boolean bool:   %i,  address: %p\n", boolean, &boolean);

  return 0;
}
