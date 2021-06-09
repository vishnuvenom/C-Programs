// Display average marks

#include <stdio.h>

void main()
{
  int marks1,marks2;
  float avg;

     printf("Enter marks in English : ");
     scanf("%d",&marks1);

     printf("Enter marks in Maths   : ");
     scanf("%d",&marks2);

     avg = (marks1 + marks2) / 2.0;

     printf("Average : %f", avg);
}
