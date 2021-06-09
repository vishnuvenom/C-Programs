// Prime number 1 to 100

void main()
{
    int number,i,prime;

     for(number = 1; number <= 100; number += 2)
     {
        prime = 1;
        for(i = 2; i <= number/2; i++)
        {
          if (number % i == 0)
          {
              prime = 0; // False
              break;
          }
        } // end of inner for

        if(prime)
          printf("%d ",number);

     } // end of outer for
}
