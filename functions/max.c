#include <stdio.h>

int max(int a, int b)
{
   return  a > b ? a : b;
}

void main()
{
  int big, a = 10, b = 20;

     big = max(a,b);
     printf("%d",big);
}
