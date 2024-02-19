#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int n,i,r,s=0;
clrcsr();
printf("Enter the no:-\n");
scanf("%d",&n);
{
for(i=0;n!=0,n=(n/10);i++)
r=n%10;
s=s+(r*(pow(2,i)));
}
printf("RESULT=%d",s);
getch();
}

