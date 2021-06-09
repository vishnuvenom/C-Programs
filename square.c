// Take a number from user and display square of the number
// Date : 16-MAY-2020

#include <stdio.h>

void main()
{
    int num,square;  // variables

       printf("Enter a number :");
       scanf("%d",&num);

       square = num * num;

       printf("Square of %d is %d",num, square);
}
