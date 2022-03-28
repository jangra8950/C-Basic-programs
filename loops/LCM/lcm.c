main()
{
    int a,b,lcm;
    printf(" enter two no to find lcm ");
    scanf("%d%d",&a,&b);
    for(lcm=a>b?a:b;lcm<=a*b;lcm++)
    {
        if(lcm%a==0&&lcm%b==0)
        break;
    }
    printf(" lcm is %d",lcm);
    getch();
}
