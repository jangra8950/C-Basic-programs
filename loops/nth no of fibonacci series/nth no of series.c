main()
{
   int k,n;
   int a=-1;
   int b=1;
   printf(" enter the no to get Nth no of fibonacci series ");
   scanf("%d",&n);
   while(n)
   {
       k=a+b;
       a=b;
       b=k;
       n--;
   }
   printf(" no of fibonaci series is %d",k);
   getch();
}
