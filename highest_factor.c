// Take a number and display its highest factor

void main()
{
    int number,i,hf = 1;

      printf("Enter a number :");
      scanf("%d",&number);


      for(i = 2; i <= number/2; i++)
      {
          if (number % i == 0)
          {
              hf = i;
          }
      }

      printf("Highest Factor : %d", hf);
}
