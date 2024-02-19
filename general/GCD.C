#include<stdio.h>
#include<conio.h>
void main()
	  {
	  int a,b,c,lcm;
	  clrscr();
	  printf("Enter the no:-");
	  scanf("%d%d",&a,&b);
	  c=a*b;
	  while(a!=b)
	  if(a>b)
	  a=a-b;
	  else
	  b=a-b
	  lcm=c/a;
	  printf("RESULT=%d",a);
	  printf("RES?UL?T=%d",lcm);
	  getch();
	  }