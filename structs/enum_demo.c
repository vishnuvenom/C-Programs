#include <stdio.h>
#include <string.h>

enum week {
   MON = 1, TUE = 2, WED = 3, THU = 4
};

enum payment
{
  CASH, CREDIT, GOOGLE
};

main()
{
 enum week day  = MON;
 enum payment paymode = GOOGLE;


   if (day == MON)
      printf("Monday");

}
