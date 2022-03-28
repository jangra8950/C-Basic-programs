main()
{
   int k,n;
   int a=-1;
   int b=1;
   printf(" enter the given no to check in fibonacci series ");
   scanf("%d",&n);
   k=a+b;
   while(k<n)
   {
      a=b;
      b=k;
      k=a+b;
   }
    if(k==n)
        printf(" YES");
    else
        printf(" NO");
   getch();
}
