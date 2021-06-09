// Program to count words in a string

#include <stdio.h>

void main()
{
  char st[100];
  int i, words = 1;

      printf("Enter a string :");
      gets(st);

      for(i=0; st[i] != '\0'; i++)
      {
          if(st[i] == ' ')  //  st[i] == 32
              words ++;
      }

      printf("No. of words : %d",words);

}
