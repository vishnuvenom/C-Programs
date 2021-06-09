
// Program to count uppercase letters in a string

#include <stdio.h>

void main()
{
  char st[100];
  int i, upper = 0;

      printf("Enter a string :");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
      {
          if(isupper(st[i]))
              upper ++;
      }

      printf("No. of uppercase letters : %d",upper);

}
