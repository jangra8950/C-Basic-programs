main()
{
    int i,n,sum=0,k;
    printf(" enter the no upto which u want sum of odd no ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=2*i-1;
       sum=sum+k;
    }
    printf("sum is %d",sum);
    getch();
}
