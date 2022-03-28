void main()
{
    int a,n;
    printf(" enter a no ");
    scanf("%d",&n);
    a= prime(n);
    if(a==0)
        printf(" non prime number ");
    else
        printf(" prime number ");

    getch();
}
int prime (int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
    return 0;
    return 1;
}
