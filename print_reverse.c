
// Print a number in reverse order

#include <stdio.h>

void main()
{
  int num = 256, digit;

     while (num > 0 )
     {
         digit = num % 10;   // take last digit
         printf("%d", digit);
         num /= 10;          // remove last digit
     }
}
