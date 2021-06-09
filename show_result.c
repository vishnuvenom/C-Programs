// Display result by taking marks

#include <stdio.h>

void main()
{
  int marks;

      printf("Enter marks : ");
      scanf("%d",&marks);

      if (marks > 50)
          printf("Congratulations!");
      else
          printf("Sorry! Next time better luck!");

}
