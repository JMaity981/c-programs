# include<stdio.h>
# include<conio.h>
int febo(int,int,int);
void main()
{
   int n,a=0,b=1;
   clrscr();
   printf("Enter the value of a No.=");
   scanf("%d",&n);
   printf("Febonacci series:\n%d\n%d\n",a,b);
   febo(n,a,b);
   getch();
}
int febo(int n,int a,int b)
{
   int c;
   c=a+b;
   if(c<=n)
   {
      printf("%d\n",c);
      a=b;
      b=c;
      febo(n,a,b);
   }
}