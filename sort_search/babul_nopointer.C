/*................. BABUL SHORT USING POINTER .........*/
#include<stdio.h>
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
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(*(a+j)>*(a+j+1))
{
t=*(a+j);
*(a+j)=*(a+j+1);
*(a+j+1)=t;
}
}
}
printf(" shorting of element:-\n");
for(i=0;i<n;i++)
printf(" %d",*(a+i));
getch();
return(0);
}
/*........... END THE PORGRAM ..........*/

