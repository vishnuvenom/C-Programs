// Smallest Factor

void main()
{
    int number,i, found = 0; // True

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
              found = 1;
              break;
          }
      }

      if(found)
         printf("Smallest Factor is : %d", i);
      else
         printf("Smallest Factor is : %d",number);
}
