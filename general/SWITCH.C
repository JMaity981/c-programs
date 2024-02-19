#include<stdio.h>
#include<conio.h>
void main()
{
int num,x;
clrscr();
printf("\n*************Enter Your Number************\n");
scanf("%d",&num);
printf("\n ************* U r Enter: ___________: ");
if(num>=20)
x=num/10;
switch(x)
{
case 2:printf("tuenty");
break;
case 3:printf("thirty");
break;
case 4:printf("fourty");
break;
case 5:printf("fifty");
break;
case 6:printf("sixty");
break;
case 7:printf("seventy");
break;
case 8:printf("eighty");
break;
case 9:printf("ninety");
break;
}
if(num>20)
num=num%10;
switch(num)
{
case 1:printf("one");
break;
case 2:printf("two");
break;
case 3:printf("three");
break;
case 4:printf("four");
break;
case 5:printf("five");
break;
case 6:printf("six");
break;
case 7:printf("seven");
break;
case 8:printf("eight");
break;
case 9:printf("nine");
break;
case 10:printf("ten");
break;
case 11:printf("elaven");
break;
case 12:printf("twelve");
break;
case 13:printf("thurten");
break;
case 14:printf("fourten");
break;
case 15:printf("fiften");
break;
case 16:printf("sixten");
break;
case 17:printf("sevanten");
break;
case 18:printf("eighten");
break;
case 19:printf("nineten");
break;
}
getch();
}