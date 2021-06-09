// Strong number
void main()
{
    int number,digit,i,sum = 0,fact, org_number;

      printf("Enter a number :");
      scanf("%d",&number);

      org_number = number;

      while(number > 0)
      {
          digit = number % 10;
          // Factorial for digit
          fact = 1;
          for(i = 2; i <= digit; i++)
              fact *= i;

          sum += fact;
          number /= 10;
      }

      if(sum == org_number)
         printf("Strong number!");
      else
         printf("Not a strong number!");
}
