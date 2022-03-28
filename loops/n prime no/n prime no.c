main()
{
    int i,a=2,n;
    printf(" enter no to find prime numbers ");
    scanf("%d",&n);
    while(n)
    {
        for(i=2;i<a;i++)
       {
           if(a%i==0)
            break;
        }
            if(a==i)
            {
            printf(" %d ",a);
            n--;
            }
            a++;

    }
    getch();
}
