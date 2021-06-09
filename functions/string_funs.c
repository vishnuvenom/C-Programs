// string related functions

#include <stdio.h>

int count_upper(char st[30])
{
   int i,count = 0;

      for(i=0; st[i] != '\0'; i ++)
      {
         if (isupper(st[i]))
               count ++;
      }
      return count;
}

int count_words(char * st)
{
  int i,count=1;

    for(i=0;st[i]!=0;i++)
    {
      if(st[i]== ' ')
           count++;
    }
    return count;
}

void main()
{
   printf("Count = %d\n", count_upper("This is FINE"));
   printf("Count = %d\n", count_words("This is FINE"));
}
