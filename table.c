// Print table for the given number
// Usage :  table  <number>

#include <stdio.h>

void main(int argc, char * argv[])
{
  int num, i, len = 10;

     if(argc < 2)
     {
        printf("Usage : table <number> [length]\n");
        printf("Displays table for the given number with the given length.\n");
        printf("If length is not given then it is taken as 10.\n");
        return; // stop program
     }

     if (argc > 2)
     {
         len = atoi(argv[2]);  // Convert third parameter to int
         if (len == 0)  // if conversion fails
            len = 10;
     }

     num = atoi(argv[1]);   // convert string to int
     if(num == 0)
     {
         printf("Sorry! Invalid Number. Please provide a valid number!");
         return;
     }

     for(i=1; i <= len; i ++)
     {
        printf("%2d * %2d  = %4d\n",num,i, num * i);
     }

}
