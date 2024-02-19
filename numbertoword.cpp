#include<stdio.h>
#include<conio.h>
void word1 (int);
void word2 (int);
void main()
{
int n,r,t;
printf("enter the number");
scanf("%d",&n);
if(n>999)
{
t=n/1000;
word2(t);
n=n%1000;
printf(" thousand ");
}
if(n>99)
{
t=n/100;
n=n%100;
word2(t);
printf(" hundrate ");
}
if(n<=99 && n>19)
{
printf(" ");
t=n/10;
word1(t);
n=n%10;
printf(" ");
}
if(n<=19)
{
word2(n);
}
getch();
}
void word1 (int b)
{
switch (b)
{
case 2:
printf("twenty");
break;
case 3:
printf("thirti");
break;
case 4 :
printf("fourty ");
break;
case 5  :
printf("fifti");
break;
case 6   :
printf("sixti");
break;
case 7    :
printf("seventen");
break;
case 8:
printf("eightey");
break;
case 9:
printf("nintey");
break;
}
}

void word2 (int c)
{
switch (c)
{
case 1:
printf("one");
break;
case 2 :
printf("two");
break;
case 3  :
printf("three");
break;
case 4   :
printf("four ");
break;
case 5   :
printf("five");
break;
case 6    :
printf("six");
break;
case 7     :
printf("seven");
break;
case 8      :
printf("eight");
break;
case 9   :
printf("nine");
break;
case 10:
printf("ten");
break;
case 11:
printf("eleven");
break;
case 12 :
printf("twelve");
break;
case 13  :
printf("tihren");
break;
case 14   :
printf("fourten ");
break;
case 15   :
printf("fiften");
break;
case 16    :
printf("sixten");
break;
case 17     :
printf("seventen");
break;
case 18      :
printf("eighten");
break;
case 19   :
printf("nineten");
break;
}

}
