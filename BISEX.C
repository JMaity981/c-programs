# include<stdio.h>
# include<conio.h>
# include<math.h>
# include<process.h>
float fx(float);
void main()
{
    float a,b,m,e=0.00001,fa,fb,fm;
    clrscr();
    printf("enter the value of a & b");
    scanf("%f%f",&a,&b);
    as:fa=fx(a);
    fb=fx(b);
    if(fa*fb>0)
    {
	printf("the root are not lies");
	getch();
	exit(1);
    }
    m=(a+b)/2;
    fm=fx(m);
    if(fa*fm<0)
    b=m;
    else
    a=m;
    if(fabs(fm)>e)
    goto as;
    printf("The result is= %f",m);
    getch();
}
float fx(float a)
{
   float r;
   r=((a*a*a)-4.0*a-9.0);
   return(r);
}