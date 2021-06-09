// Take 5 strings and display avg. length

#include <stdio.h>

void main()
{
  char st[20];
  int i,total = 0;

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a string :");
        gets(st);

        total += strlen(st);
     }

     printf("Avg. Length : %d",total / 5);

}
