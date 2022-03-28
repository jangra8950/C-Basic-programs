main()
{
    int min,i,a,b;
    printf(" enter two no to find they are co-prime or not ");
    scanf("%d%d",&a,&b);
    min=(a<b)?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
            break;
    }
    if(i==min+1)
    printf(" co-prime numbers ");
    else
        printf(" not co-prime ");
    getch();
}
