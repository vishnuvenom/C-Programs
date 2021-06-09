
// User-defined data type
struct student
{
   // members
   char name[20];
   int english, maths;
};

void print_student(struct student s)
{
     printf("Name     : %s\n", s.name);
     printf("English  : %3d\n",s.english);
     printf("Maths    : %3d\n",s.maths);
     printf("Total    : %3d\n",s.english + s.maths);
}

main()
{
  struct student students[5];
  int i;

    srand(time(0));
    for(i = 0; i < 5; i ++)
    {
        sprintf(students[i].name,"Name%d",i+1);
        students[i].english = rand() % 100;
        students[i].maths = rand() % 100;
        print_student(students[i]);
    }
}
