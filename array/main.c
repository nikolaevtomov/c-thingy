#include <stdio.h>

int main()
{
  int list[8] = {0};

  for(int i = 0; i < 8; i++)
  {
    printf("Item: %i, Address: %p\n", list[i], &list[i]);
  }

  return 0;
}
