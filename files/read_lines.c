// Read lines from given file along with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30], line[100];
  char * p;
  int lineno = 1;

      printf("Enter filename :");
      gets(filename);

      fp = fopen(filename,"rt");  // create a file
      if(fp == NULL)
      {
          printf("Sorry! Could not open file. Quitting...");
          exit(1);
      }

      while(1)
      {
          p = fgets(line,100,fp);
          if(p == NULL)  // EOF
            break;
          printf("%2d: %s", lineno, line);
          lineno ++;
      }

      fclose(fp);
}
