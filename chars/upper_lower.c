
// Take a char and display whether it is uppercase or lowercase

#include <stdio.h>

void main()
{
  char ch;

     printf("Enter a character :");
     ch = getche();

     if (ch >= 'A' && ch <= 'Z')
         printf("Uppercase");
     else
         printf("Lowercase");
}
