# include<stdio.h>
# include<conio.h>
void main()
{
  int a[20],i,n,key,beg,end,mid;
  clrscr();
  printf("\n\n");
  printf("\tHow many number you like to ues:");
  scanf("%d",&n);
  printf("\tEnter the numbers in assending order:");
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\tEnter the number that you want to serach:");
  scanf("%d",&key);
  beg=0;
  end=n-1;
  mid=(beg+end)/2;
  while(a[mid]!=key&&beg<=end)
  {
    if(key>a[mid])
     {
       beg=mid+1;
     }
    else
    end=mid-1;
    mid=(beg+end)/2;
  }
  if(a[mid]==key)
   printf("\tFound at the possition %d",mid+1);
  else
   printf("\tNot found");
  getch();
}
