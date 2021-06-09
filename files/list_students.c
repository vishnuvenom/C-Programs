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
   int count;

        fp = fopen("students.dat","rb");
        while(1)
        {
           // read a block from file
           count = fread(&s,sizeof(s), 1, fp);
           if (count == 0)  // EOF
            break;

           printf("%-20s  %3d  %3d  %3d\n", s.name, s.english, s.maths, s.english + s.maths);
        }

        fclose(fp);
}
