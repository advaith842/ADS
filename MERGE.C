#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50],arr2[50],size1,size2,i,k,merge[100];
clrscr();
printf("enter thr array1 size");
scanf("%d",&size1);
printf("enter array1 elements");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
k=i;
printf("\n enter the array2 size");
scanf("%d",&size2);
printf("\n enter the elements of array2");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[k]=arr2[i];
k++;
}
printf("\n the merged two arrays are");
for(i=0;i<k;i++)
printf("%d",merge[i]);
getch();
return(0);
}