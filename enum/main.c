#include <stdio.h>

int main()
{
  enum Company {GOOGLE, EBAY = 12, MICROSOFT};
  enum Company microsoft = MICROSOFT;

  printf("%i is located at %p\n", microsoft, &microsoft);

  return 0;
}
