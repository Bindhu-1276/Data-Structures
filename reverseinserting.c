#include <stdio.h>
int main()
{
	int a[50],size,num,pos,i;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the inserting data:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",& pos);
	for(i=size-1;i<=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	printf("enter the elements in the array:");
	for(i=size-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}	
