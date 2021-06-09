// Read details of student using Random Access

#include <stdio.h>

struct student
{
   char name[20];
   int english, maths;
};

void main()
{
   struct student s;
   FILE * fp;
   int rollno;
   int count;

        fp = fopen("students.dat","rb");

        printf("Enter student rollno :");
        scanf("%d",&rollno);

        // Random Access
        fseek(fp, (rollno - 1) * sizeof(s), SEEK_SET);

        // read a block from file
        count = fread(&s,sizeof(s), 1, fp);
        if (count == 1)  // EOF
           printf("%-20s  %3d  %3d  %3d\n", s.name, s.english, s.maths, s.english + s.maths);
        else
           printf("Sorry! Could not get details of student");

        fclose(fp);
}
