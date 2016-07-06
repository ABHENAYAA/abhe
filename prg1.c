#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n Enter number=");
scanf("%d",&n);
if(n>0)
{
printf("\n Positive num");
}
else if(n<0)
{
printf("\n Negative num");
}
else
{
printf("\n Number is zero");
}
getch();
}
