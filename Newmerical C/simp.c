//SIMPSON 1/3 RULE //
/********************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x)1-exp(-(x)/2.0)
void main()
{
		int m,n,i;
		float a,b,h,sum;
		float ics,x,f1,f2,f3;
		printf("\n Initial value of x\n");
		scanf("%f",&a);
		printf("\n Final value of x\n");
		scanf("%f",&b);
		printf("No of segments(even number)\n");
		scanf("%d",&n);
		h=((b-a)/n);
		m=n/2;
		sum=0.0;
		x=a;
		f1=f(x);
		for(i=1;i<=m;i++)
		{
		f2=f(x+h);
		f3=f(x+2*h);
		sum=sum+f1+4*f2+f3;
		f1=f3;
		x=x+2*h;
		}
		ics=sum*h/3.0;
		printf("Integral form %f to %f \n",a,b);
		printf("When h=%f is %f \n",h,ics);
      getch();
		}
