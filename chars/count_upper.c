
// Take a 10 chars and display no. of uppercase letters

#include <stdio.h>

void main()
{
  char ch, i, upper = 0;

     printf("\nEnter 10 characters below\n");
     for(i=1; i <= 10; i ++)
     {
       ch = getche();
       if (ch >= 'A' && ch <= 'Z')
            upper ++;
     }
     printf("\nNo. of uppercase letters = %d", upper);
}
