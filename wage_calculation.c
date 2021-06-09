// Display wage based on week and no. of hours worked
#include <stdio.h>

void main()
{
    int week,nohours,wage;

      printf("Enter week number [1-7] :");
      scanf("%d",&week);
      printf("Enter no. hours worked  :");
      scanf("%d",&nohours);

      switch(week)
      {
          case 3 :
          case 4 : wage = 150;
                   break;
          case 6 : wage = 250;
                   break;
          case 7 : wage = 300;
                   break;
          default: wage = 200;
                   break;
      }

      printf("Total Wage = %d", wage * nohours);
}
