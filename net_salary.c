// Calculate Net Salary

#include <stdio.h>

void main()
{
int salary, hra, da, net_salary;

   printf("Enter Salary : ");
   scanf("%d",&salary);

   if (salary > 50000)
   {
       hra = salary * 0.30;
       da = salary * 0.20;
   }
   else
   {
       hra = salary * 0.25;
       da = salary * 0.15;
   }

   net_salary = salary + hra + da;
   printf("Net Salary : %d", net_salary);
}
