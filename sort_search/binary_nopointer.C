/*............................Binary search ...............*/
#include<stdio.h>
#include<conio.h>
void main(){

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
     getch();

}