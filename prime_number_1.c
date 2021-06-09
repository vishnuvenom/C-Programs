// Prime number - version 1

void main()
{
    int number,i,count = 0;

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
              count ++;
          }
      }

      if(count == 0)
         printf("Prime number!");
      else
         printf("Not a prime number!");
}
