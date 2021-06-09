// Take 5 strings and display the largest

#include <stdio.h>

void main()
{
  char st[20], ls[20];
  int i;

     strcpy(ls,"");
     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a string :");
        gets(st);

        if (strcmp(st,ls) > 0)
           strcpy(ls,st);
     }

     printf("Largest String : %s",ls);

}
