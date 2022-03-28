main()
{
    int i,a,n;
    printf(" enter no to find next prime no ");
    scanf("%d",&n);
    for(a=n+1;;a++)
    {
        for(i=2;i<a;i++)
       {
           if(a%i==0)
            break;
        }
            if(a==i)
            {
            printf(" %d ",a);
             break;
            }
    }
    getch();
}
