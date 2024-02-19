#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
float y[100],a,b,x,val,h,sum=0,sum1=0;
clrscr();
printf("enetr the low lim:",);
printf("enter the upper limt:",);
printf("enter the no of subintorvals:");
scanf("%f%f%d",&a,&b,&n);
if((n%2)==0)
{
h=(b-a)/n;
for(i=0;i<=n;i++)
{
x=a+i*h;
y[i]=((1/(1+(x))));
}
for(i=1;i<=n-1;i++)
{
sum=sum+y[i];
}
for(i=2;i<=n-2;i+=2)
{
sum1=sum1+y[i];
}
val=h/3*(y[0]+y[n]+4*sum+2*sum1);
printf("\n\n\t the valu at intregration is:%f",val);
}
else
{
printf("\n\n\t you are odd interval put\n");
exit(0);
}
getch();
}