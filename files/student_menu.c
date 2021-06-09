//Students Menu

#include <stdio.h>
#define  FILENAME "students.dat"

struct student
{
   char name[20];
   int english, maths;
};

void add_student()
{
    struct student s;
    FILE * fp;

       fp = fopen(FILENAME,"ab");
       fflush(stdin);
       printf("Enter student name     : ");
       gets(s.name);
       printf("Enter marks in English : ");
       scanf("%d",&s.english);
       printf("Enter marks in Maths   : ");
       scanf("%d",&s.maths);
       // Write block into file
       fwrite(&s,sizeof(s), 1, fp);
       fclose(fp);
}


void list_students()
{
   struct student s;
   int count;
   FILE * fp;

     fp = fopen(FILENAME,"rb");
     printf("\n\nList of Students\n");
     printf("================\n");

     while(1)
     {
        // read a block from file
        count = fread(&s,sizeof(s), 1, fp);
        if (count == 0)  // EOF
         break;
        printf("%-20s  %3d  %3d  %3d\n", s.name, s.english, s.maths, s.english + s.maths);
     }
     printf("\n\n");
     fclose(fp);
}

void update_student()
{
    FILE * fp;
    struct student s, newdata;
    int count, found = 0;

        fp = fopen(FILENAME,"r+b");

        fflush(stdin);
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

void search_student()
{
   struct student s;
   FILE * fp;
   int rollno;
   int count;

        fp = fopen(FILENAME,"rb");

        printf("Enter student rollno :");
        scanf("%d",&rollno);

        // Random Access
        fseek(fp, (rollno - 1) * sizeof(s), SEEK_SET);

        // read a block from file
        count = fread(&s,sizeof(s), 1, fp);
        if (count == 1)  // EOF
           printf("%-20s  %3d  %3d  %3d\n", s.name, s.english, s.maths, s.english + s.maths);
        else
           printf("Sorry! Could not get details of student\n");

        fclose(fp);
}

void main()
{
FILE * fp;
int choice;

     while(1)
     {
         printf("\n**** Student Menu ****\n");
         printf("1. Add Student\n");
         printf("2. List Students\n");
         printf("3. Update Student\n");
         printf("4. Get Student by rollno\n");
         printf("5. Exit\n");
         printf("Choice [1-5] :");
         scanf("%d",&choice);
         switch(choice)
         {
            case 1 : add_student();
                     break;
            case 2 : list_students();
                     break;
            case 3 : update_student();
                     break;
            case 4 : search_student();
                     break;
            case 5 : exit(0);
         }

     }
}
