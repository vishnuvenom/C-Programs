// Perfect Number

void main()
{
    int number,i, sum = 1;

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
             sum += i;
          }
      }

      if (number == sum)
        printf("Perfect Number");
      else
        printf("Not a perfect Number");
}
