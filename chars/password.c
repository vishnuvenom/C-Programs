
// Take 8 chars and check whether it is a valid password

#include <stdio.h>

void main()
{
  char ch;
  int i;
  int upper = 0, digit = 0;

     printf("Enter password :");

     for(i=1;  i <= 8; i ++)
     {
       ch = getch();
       putchar('*');
       if(isupper(ch))
           upper = 1;
       else
        if(isdigit(ch))
           digit = 1;
     }

     if(upper && digit)
        printf("\nValid Password");
     else
        printf("\nNot a Valid Password");

}
