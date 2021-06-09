// Fill an array of 10 elements with squares

#include <stdio.h>

void main()
{
    int squares[10];
    int i;

         for(i=1; i <= 10; i ++)
         {
            squares[i-1] = i*i;
            printf("%5d", squares[i-1]);
         }
}
