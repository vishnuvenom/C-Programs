
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
  struct student s1;

    s1.english = 90;
    s1.maths = 95;
    strcpy(s1.name,"Bill");

    print_student(s1);
}
