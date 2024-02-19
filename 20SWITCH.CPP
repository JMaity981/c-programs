#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,x,y,a,z=0,i=0;
    clrscr();
    printf("\n\n");
    printf("\tPress 1 for Binary to Desimal value\n\tPress 2 for Desimal to Binary value\n\tPress 3 for Octal to Desimal value\n\tPress 4 for Desimal to Octal value\n\tPress 5 for Binary to Octal value\n\tPress 6 for Octal to Binary value: ");
    scanf("%d",&n);
    printf("\tEnter the value: ");
    scanf("%d",&x);
    a=x;
    switch(n)
    {
	 case 1:while(x!=0)
		{
		    y=x%10;
		    z=z+y*pow(2,i);
		    x=x/10;
		    i++;
		}
		printf("\tThe Desimal Value of Binary no. %d is: %d",a,z);
		break;
	 case 2:while(x!=0)
		{
		     y=x%2;
		     z=z+y*pow(10,i);
		     x=x/2;
		     i++;
		}
		printf("\tThe Binary Value of Desimal no. %d is: %d",a,z);
		break;
	 case 3:while(x!=0)
		{
		     y=x%10;
		     z=z+y*pow(8,i);
		     x=x/10;
		     i++;
		}
		printf("\tThe Desimal value of Octal no. %d is: %d",a,z);
		break;
	 case 4:while(x!=0)
		{
		     y=x%8;
		     z=z+y*pow(10,i);
		     x=x/8;
		     i++;
		}
		printf("\tThe Octal value of Desimal no. %d is: %d",a,z);
		break;
	 case 5:while(x!=0)
		{
		      y=x%10;
		      z=z+y*pow(2,i);
		      x=x/10;
		      i++;
		}
		x=z;
		z=0;
		i=0;
		while(x!=0)
		{
		      y=x%8;
		      z=z+y*pow(10,i);
		      x=x/8;
		      i++;
		}
		printf("\tThe Octal value of Binary no. %d is: %d",a,z);
		break;
	 case 6:while(x!=0)
		{
		     y=x%10;
		     z=z+y*pow(8,i);
		     x=x/10;
		     i++;
		}
		x=z;
		z=0;
		i=0;
		while(x!=0)
		{
		     y=x%2;
		     z=z+y*pow(10,i);
		     x=x/2;
		     i++;
		}
		printf("\tThe Binary value of Octal no. %d is: %d",a,z);
		break;
	 default:printf("\tWrong input");
    }
    getch();
}