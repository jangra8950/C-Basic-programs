main()
{
    int a,b,hcf;
    printf(" enter two no to find hcf ");
    scanf("%d%d",&a,&b);
    for(hcf=a<b?a:b;hcf>=1;hcf--)
    {
        if(a%hcf==0&&b%hcf==0)
        break;
    }
    printf(" hcf is %d",hcf);
    getch();
}
