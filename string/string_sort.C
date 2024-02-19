 #include<stdio.h>
 #include<conio.h>
void main()
{
  int i,j,n;
  char str[20][20],temp[20];
  clrscr();
  puts("Enter the no. of string to be sorted");
  scanf("%d",&n);
 // printf("\n...........Enter the city or string name........\n");
  for(i=0;i<=n;i++)
      gets(str[i]);
  for(i=0;i<=n;i++)
      for(j=i+1;j<=n;j++)
{
	   if(strcmp(str[i],str[j])>0)
{
	       strcpy(temp,str[i]);
	      strcpy(str[i],str[j]);
	      strcpy(str[j],temp);
	   }
      }
  printf("The sorted string\n");
  for(i=0;i<=n;i++)
      puts(str[i]);
 // return 0;
  getch();
}

