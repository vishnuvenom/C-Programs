#include <stdio.h>


int factorial(int num)
{
  if (num <= 1)
   return 1;

  return num * factorial(num - 1);
}

void main()
{

    printf("%d", factorial(5));

}
