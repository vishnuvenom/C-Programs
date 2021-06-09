
// Take a character and convert it to upper

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter a characters :");
     ch = getche();

     if (islower(ch))
         ch = toupper(ch);

     printf("\nNew Character : %c",ch);
}
