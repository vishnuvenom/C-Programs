# include <stdio.h>

main()
{
  char filename1[] = "c:\\classroom\\file1.txt";
  char filename2[] = "c:\\classroom\\file2.txt";
  FILE * fp1, * fp2;
  int ch1,ch2;

     fp1 = fopen(filename1,"rt");
     fp2 = fopen(filename2,"rt");

     while(1)
     {
       ch1 = fgetc(fp1);
       ch2 = fgetc(fp2);

       if(ch1 != ch2)
       {
         printf("Sorry! Files do not match!");
         break;
       }

       if(ch1 == EOF)
       {
         printf("Files are same!");
         break;
       }
     }

     fclose(fp1);
     fclose(fp2);
}
