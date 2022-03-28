void main()
{
    int n,s;
    printf(" enter no to find sum of square of natural no ");
    scanf("%d",&n);
    s=sum(n);
    printf(" sum is %d",s);
    getch();
}
int sum (int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i*i;
    return sum;

}
