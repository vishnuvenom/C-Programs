// Accepts 5 ages and display them

#include <stdio.h>

void main()
{
    int ages[5];
    int i;

         for(i=0; i < 5; i ++)
         {
             printf("Enter Age : ");
             scanf("%d",&ages[i]);
         }

         printf("\nAges in reverse order\n");
         for(i=4; i >= 0; i --)
            printf("%5d", ages[i]);
}
