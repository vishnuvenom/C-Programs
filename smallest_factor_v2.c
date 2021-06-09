// Smallest Factor

void main()
{
    int number,i;

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
              printf("Smallest Factor is : %d", i);
              exit(0);  // Terminate program
          }
      }

      printf("Smallest Factor is : %d",number);
}
