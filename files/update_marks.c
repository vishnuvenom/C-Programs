#include <stdio.h>

struct student
{
   char name[20];
   int english, maths;
};


void main()
{
   struct student s;
   struct student newdata;
   FILE * fp;
   int count, found = 0;

        fp = fopen("students.dat","r+b");
        printf("Enter student name : ");
        gets(newdata.name);

        while(1)
        {
           // read a block from file
           count = fread(&s,sizeof(s), 1, fp);
           if (count == 0)  // EOF
             break;

           if(strcmp(s.name, newdata.name) == 0 )
           {
              printf("Marks in English : ");
              scanf("%d",&newdata.english);
              printf("Marks in Maths   : ");
              scanf("%d",&newdata.maths);

              // Move back by one record
              fseek(fp, sizeof(struct student) * -1l, SEEK_CUR);

              // update data in the file
              fwrite(&newdata, sizeof(struct student), 1, fp);
              found = 1;
              break;
           }
        }

        fclose(fp);
        if(!found)
            printf("Sorry! Student not found!");
}
