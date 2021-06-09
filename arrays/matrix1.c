// Fill an array of 20 elements with random numbers and print odd elements first and then even elements

#include <stdio.h>

void main()
{
    int a[5][5];
    int i,j;

         srand(time(0)); // initialize random seed

         for(i=0; i < 5; i ++)
         {
            for(j=0; j < 5; j ++)
            {
              a[i][j] = rand() % 100;
              printf("%5d", a[i][j]);
            }
            printf("\n");
         }
}
