#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int a[9]={1,2,3,4,5,6,7,8,8};
int i,b,c=0;
clrscr();
//b=strlen(a);
for(i=0;i<=9;i++)
{
if(c<=2)
{
printf("%d",a[i]);
c++;
}
else
{
printf(".");
c=0;
}
}
getch();
}
