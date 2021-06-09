// Take a number and print total for numbers 1 to that number
void main()
{
    int num,sum,i;

    printf("Enter a number : ");
    scanf("%d",&num);

    sum = 0;
    for(i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n",sum);
}
