	/**************************/
	/*LAGRANGE' INTERPOLATION*/
	/*************************/
	#include<stdio.h>
	#define MAX 100
	void main()
	{
	float ax[MAX+1],ay[MAX+1],nr,dr,x,y=0;
	int i,j,n;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	printf("Enter the set of value \n ");
	for(i=0;i<=n;i++)
	scanf("%f%f",&ax[i],&ay[i]);
	puts("Enter the value of x for which value of y is wanted");
	scanf("%f",&x);
	for(i=0;i<=n;i++)
	{
	nr = dr =1;
	for(j=0;j<=n;j++)
	if(j!=i)
	{
	nr*=x-ax[j];
	dr*=ax[i]-ax[j];
	}
	y+=(nr/dr)*ay[i];
	}
	printf("When x=%4.1f  y=%7.1f\n",x,y);
	}




	// Output
	// Enter the value of n
	// 5
	// Enter the set of value
	// 0 1
	// 1 14
	// 2 15
	// 4 5
	// 5 6
	// 6 19
	// Enter the value of x for which value of y is wanted
	// 4.5
   // when x = 4.5  y = 4.4


