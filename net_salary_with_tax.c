// Calculate Net Salary

#include <stdio.h>

void main()
{
int salary, hra, da, tax = 0, gross_salary, net_salary;

   printf("Enter Salary : ");
   scanf("%d",&salary);

   if (salary > 50000)
   {
       hra = salary * 30 / 100;
       da = salary * 20 / 100;
   }
   else
   {
       hra = salary * 25 / 100;
       da = salary * 15 / 100;
   }

   gross_salary = salary + hra + da;

   if (gross_salary > 100000)
       tax = gross_salary * 12 / 100;

   net_salary = gross_salary - tax;

   printf("Salary      : %6d\n", salary);
   printf("+ HRA       : %6d\n", hra);
   printf("+ DA        : %6d\n", da);
   printf("              ------\n");
   printf("Gross Salary: %6d\n", gross_salary);
   printf("- Tax       : %6d\n", tax);
   printf("              ------\n");
   printf("Net Salary  : %6d\n", net_salary);

}
