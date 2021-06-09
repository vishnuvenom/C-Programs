// Fill an array 5x5 and search for a number
#include <stdio.h>

void main()
{
    int a[5][5];
    int i,j,sn, found = 0;

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

         printf("\nEnter a number : ");
         scanf("%d",&sn);

         for(i=0; i < 5; i ++)
         {
            for(j=0; j < 5; j ++)
            {
               if(a[i][j] == sn)
               {
                   found = 1;
                   goto display;
               }
            }
         }

         display:

         if(found)
            printf("Found at %d,%d",i,j);
         else
            printf("Not found!");

}
