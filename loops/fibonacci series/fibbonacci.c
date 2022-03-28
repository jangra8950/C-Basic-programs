main()
{
   int k,n;
   int a=-1;
   int b=1;
   printf(" enter the no upto which you want fibonacci series ");
   scanf("%d",&n);
   while(n)
   {
       k=a+b;
       printf("%d ",k);
       a=b;
       b=k;
       n--;
   }
   getch();
}
