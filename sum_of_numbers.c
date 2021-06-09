// Take numbers until 0 is given and display sum of numbers

void main()
{
    int number,sum = 0;


        while(1)   // infinite loop
        {
          printf("Enter number [0 to stop] :");
          scanf("%d",&number);

          if (number == 0)
            break;

          sum  += number;
        }

        printf("Sum of numbers : %d", sum);
}
