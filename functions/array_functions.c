
void fill_random(int a[], int len)
{
   int i;

      for(i=0; i < len; i ++)
          a[i] = rand() % 100;
}


void print(int a[], int len)
{
   int i;

      for(i=0; i < len; i ++)
         printf("%5d", a[i]);
}

void main()
{
  int a1[10], a2[5];

      srand(time(0));
      fill_random(a1,10);
      print(a1,10);
      puts("\nSecond Array\n");
      fill_random(a2,5);
      print(a2,5);
}

