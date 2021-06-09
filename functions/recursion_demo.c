#include <stdio.h>


void reverse(int num)
{
  printf("%d", num % 10);
  if (num > 9)
    reverse(num/10);
}

void main()
{

    reverse(1560);

}
