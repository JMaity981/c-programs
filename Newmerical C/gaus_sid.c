/*********************/
/*GAUSS SEIDAL METHOD*/
/********************/
#include<math.h>
#include<stdio.h>
void main()
{
float x[10],y[10],a[10][10];
int i,j,n,k,itr;
printf("\n Enter the value for N.....\n");
scanf("%d",&n);
printf("Enter the Coefficent and RHS\n");
{
for(i=1;i<=n;i++)
for(j=1;j<=n+1;j++)
scanf("%f",&a[i][j]);
printf("\n");
}
for(i=1;i<=n;i++)
	{
	x[i]=0.0;
	y[i]=0.0;
	}
itr=0;
step1:itr++;
for(i=1;i<=n;i++)
	{
	x[i]=a[i][n+1];
	for(j=1;j<=n;j++)
		{
		if(i==j)
		continue;
		x[i]=x[i]-a[i][j]*x[j];
		}
		x[i]=x[i]/a[i][i];
	}
for(k=1;k<=n;k++)
{
	if(fabs(x[k]-y[k])>.00005)
	{
	printf("\n\n Iteration=%d\n\n",itr);
	for(i=1;i<=n;i++)
		{
		y[i]=x[i];
		printf("\n x[%d]=%f",i,x[i]);
		}
	goto step1;
	}
}
printf("\n\n Final Result Reached %d iteration",itr);
}

