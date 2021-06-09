// Take a number and display its highest factor

void main()
{
    int number,i;

      printf("Enter a number :");
      scanf("%d",&number);

      for(i = number/2; i >= 1; i --)
      {
          if (number % i == 0)
          {
              printf("Highest Factor : %d",i);
              break;
          }
      }

}
