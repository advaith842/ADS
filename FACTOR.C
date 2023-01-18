#include<stdio.h>
void main()
{
 int num,i;
 printf("enter a positive integer:");
 scanf("%d",&num);
 printf("factor of %d are",num);
 for(i=1;i<=num;i++)
 {
  if(num%i==0)
  {
   printf("%d \t",i);
  }
 }
  getch();
}
