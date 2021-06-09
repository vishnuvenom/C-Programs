// Prime number - version 2

void main()
{
    int number,i,prime = 1; // True

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
              prime = 0; // False
              break;
          }
      }

      if(prime)
         printf("Prime number!");
      else
         printf("Not a prime number!");
}
