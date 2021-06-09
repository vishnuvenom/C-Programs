// Accept 10 chars and display how many are alpha

#include <stdio.h>

void main()
{
  char ch;
  int count=0,i;

      for(i=1; i <=10; i++)
      {
         printf("\nEnter char : " );
         ch = getche();
         if (isalpha(ch))
            count ++;
      }

      printf("\nAlpha Count     : %d",count);
      printf("\nNon-alpha Count : %d",10-count);


}

