#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,i;
printf("Enter your choise for addition press 1,for subtraction press 2,for multiplication press 3,for division press 4");
scanf("%d",&i);
printf("Enter any two number");
switch(i)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
}
printf("Result is %d",c);
default:
printf("You enter wrong key");
getch();
return 0;
}