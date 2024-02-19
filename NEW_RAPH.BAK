# include<stdio.h>
# include<conio.h>
# include<math.h>
float fx(float);
float dfx(float);
void main()
{
   int a,b,e=0.00001;
   clrscr();
   printf("a=");
   scanf("%d",&a);
   pp:b=a-fx(a)/dfx(a);
   if(fabs(b-a)>e)
   {
       a=b;
       goto pp;
   }
   printf("Root=%f",b);
   getch();
}
float fx(float x)
{
   float r;
   r=3.0*(x*x*x)+5*x-4;
   return(r);
}
float dfx(float x)
{
   float y;
   y=9.0*x*x+5;
   return(y);
}