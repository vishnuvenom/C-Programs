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

        fp = fopen("students.dat","ab");
        while(1)
        {
           fflush(stdin); // Clears keyboard buffer
           printf("Enter student name[end to stop] : ");
           gets(s.name);
           if(stricmp(s.name,"end")  == 0)
              break;

           printf("Enter marks in English          : ");
           scanf("%d",&s.english);
           printf("Enter marks in Maths            : ");
           scanf("%d",&s.maths);

           // Write block into file
           fwrite(&s,sizeof(s), 1, fp);
        }

        fclose(fp);
}
