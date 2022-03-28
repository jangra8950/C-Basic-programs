main()
{
    int i,n,fact=1;
    printf(" enter no of which u want factorial ");
    scanf("%d",&n);
    while(n)
    {
       fact=fact*n;
       n--;
    }
    printf(" fact is %d",fact);
    getch();
}
