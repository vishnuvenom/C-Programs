// Array related functions

#include <stdio.h>

int sum(int a[10])
{
   int i,total = 0;

      for(i=0; i < 10; i ++)
          total += a[i];

      return total;
}

int search(int a[10], int sn)
{
   int i;

      for(i=0; i < 10; i ++)
      {
          if (a[i] == sn)
            return i;
      }

      return -1;
}


void main()
{
  int marks[] = {50,60,70,79,87,58,58,88,44,33};
  int total;

     total = sum(marks);
     printf("Total = %d\n",total);
     printf("79 found at %d\n", search(marks,79));
     printf("80 found at %d\n", search(marks,80));
}
