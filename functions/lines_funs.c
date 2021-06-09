// User-defined function
void line(char ch, int len)
{
 int i;

  for(i = 1; i <= len; i ++)
       putch(ch);
}

void main()
{
  int i;

    line('*',25);  // Call function line()
    printf("\nSrikanth Technologies\n");
    line('.',20);
}

