#include<stdio.h>
int add(int,int);
void main()
{
int a,b,sum;
clrscr();
print("enter the numbers");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("sum=%d",sum);
getch();
}
int ad (intx,inty)
{
return(x+y);
}