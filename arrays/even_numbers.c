// Fill an array of 20 elements with random numbers and print even numbers  from the array

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

         printf("\nEven Numbers of the array :");

         for(i=0; i < 20; i ++)
         {
            if ( a[i] % 2 == 0)
                 printf("%5d", a[i]);
         }
}
