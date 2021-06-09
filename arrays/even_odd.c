// Fill an array of 20 elements with random numbers and print odd elements first and then even elements

#include <stdio.h>

void main()
{
    int a[20];
    int i;

         srand(time(0)); // initialize random seed

         for(i=0; i < 20; i ++)
         {
            a[i] = rand() % 100;
            printf("%5d", a[i]);
         }

         printf("\nOdd Position Elements\n");

         for(i=1; i < 20; i += 2)
         {
            printf("%5d", a[i]);
         }


         printf("\nEven Position Elements\n");

         for(i=0; i < 20; i += 2)
         {
            printf("%5d", a[i]);
         }

}
