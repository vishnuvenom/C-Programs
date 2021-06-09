// Take a 5 marks and display the largest
void main()
{
    int marks, i, largest = 0;

    for(i = 1; i <= 5; i++)
    {
         printf("Enter a marks :");
         scanf("%d",&marks);

         if (marks > largest)
            largest = marks;
    }
    printf("Largest  = %d\n",largest);
}
