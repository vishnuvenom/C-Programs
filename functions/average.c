#include <stdio.h>

float average(int,int);  // Function declaration or Prototype Declaration

void main()
{
  int a = 10, b = 15;
  float avg;

      avg = average(a,b);
      printf("%f",avg);
}

// Function definition
float average(int n1, int n2)
{
   return  (n1 + n2) / 2.0;
}
