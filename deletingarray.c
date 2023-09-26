#include<stdio.h>
int main()
{
	int a[50],i,pos,size;
	printf("enter the size:");
	scanf("%d",&size);
	printf("enter the elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to delete:");
	scanf("%d",&pos);
	if(pos<=0 || pos>size)
	{ 
		printf("invalid position");
	}
	for(i=pos-1;i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	size --;
	printf("the elements in the array:");
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}				
