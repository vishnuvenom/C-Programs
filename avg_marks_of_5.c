// Take a marks in 5 subjects and display average
void main()
{
    int marks,i, total=0;

    for(i = 1; i <= 5; i++)
    {
         printf("Enter a marks in subject %d: ",i);
         scanf("%d",&marks);
         total  += marks;
    }

    printf("Average = %d\n",total / 5);
}
