// Display whether a number is even or odd

#include <stdio.h>

void main()
{
  int num;

      printf("Enter number : ");
      scanf("%d",&num);

      if (num % 2 == 0)
          printf("Even");
      else
          printf("Odd");

}
