main()
{
    int i,n;
    printf(" enter a no to check it is prime or not ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
        printf(" %d is prime no ",n);
    else
        printf(" %d is not prime no",n);
    getch();
}
