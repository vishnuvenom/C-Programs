// Read and print names.txt on screen
#include <stdio.h>

void main()
{
  FILE * fp;
  char name[20];
  int ch;

      fp = fopen("names.txt","rt");  // create a file
      if(fp == NULL)
      {
          printf("Sorry! Could not open file. Quitting...");
          exit(1);
      }

      while(1)
      {
          ch = fgetc(fp);  // read a char
          if(ch == EOF)
             break;
          putch(ch);
      }

      fclose(fp);
}
