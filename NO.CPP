#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,mid,beg,n,end,key,a[20];
clrscr();
printf("How many number you like to use");
scanf("%d",&n);
printf("Enter the elements in assending order");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enetr the elements that you want to search");
scanf("%d",&key);
beg=0;
end=n-1;
mid=(beg+end)/2;
while(a[mid]!=key&&beg<=end)
{
if(key>a[mid])
beg=mid+1;
else
end=mid-1;
mid=(beg+end)/2;
}
if(a[mid]==key)
printf("Found at the possition %d",i+1);
else
printf("Not found");
getch();
return 0;
}
