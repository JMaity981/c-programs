/*.......................Selection sort using pointer....................*/
#include<conio.h>
#include<conio.h>
int main()
{
int *a,i,j,t,n;
clrscr();
printf("Enter the how many element:-\n");
scanf("%d",&n);
printf("Enter the no element:-\n");
for(i=0;i<n;i++)
scanf("%d",(a+i));
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(*(a+i)>*(a+j))
{
t=*(a+i);
*(a+i)=*(a+j);
*(a+j)=t;
}
}
}
printf(" shorting of element:-\n");
for(i=0;i<n;i++)
printf(" %d",*(a+i));
getch();
return(0);
}


