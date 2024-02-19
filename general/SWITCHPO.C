#include<stdio.h>
#include<conio.h>
#include<stlib.h>
void babul()
{

    int a[10],i,n,item,f=0,l,u,mid,pos,j,t;
    clrscr();

    printf("Enter the size of an array: \n");
    scanf("%d",&n);

    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
	 scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: \n");
    scanf("%d",&item);
    /*.........................Sorting....................*/
       for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	  {
	 if(a[j]>a[j+1])
	    {
	   t=a[j];
	   a[j]=a[j+1];
	   a[j+1]=t;
	     }
	   }
	 }
printf("\n..............After assending sort...............:\n");
       for(i=0;i<n;i++)
	printf(" %d",a[i]);
	printf("\n");
/*.....................Logic of binary search................*/
    l=0,u=n-1;
    while(l<=u){
	 mid=(l+u)/2;
	 if(item==a[mid]){
	     pos=mid;
	     f=1;
	     break;
	 }
	 else if(item<a[mid]){
	     u=mid-1;
	 }
	 else
	     l=mid+1;
    }
    if(f==1)
	 printf("\nThe number is found in pos:= %d",pos+1);
    else
	 printf("The number is not found\n");

}
void selection()
{
       int a[10],b=-1,i,j,l,n;
       clrscr();
       printf("enter how many no. you want?\n");
scanf("%d",&n);
printf("enter the array elements\n");
   for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("which no. you want to find?\n");
scanf("%d",&j);
   for(i=0;i<n;i++)
 {
   if(a[i]==j)
 {
    b=i;
break;
  }
  }
   if(b==-1)
printf("the no. is not found");
else
printf("the no. is found & position:%d ",i+1);
  }
void main()
  {
   int ch;
clrscr();
printf("Shorting in the program :-\n");
printf("\n     ");
printf("\n 1. Babul shorting:-\n 2. Selection shorting:-\n 3. EXIT\n");
printf("Enter your chois :-\n");
scanf("%d",&ch);
switch (ch);
  {
     case   1:   babul();
		 getch();
		 break;

     case   2:   selection();
		 getch();
		 break;
     case   3:   printf("\n QUIT");
		 exit(0);
defult  :        printf("\n::: WRONG CHOISE :::");

 }
 }




