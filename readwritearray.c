#include<stdio.h>
int main()
{
	int a[5];
	printf("enter the numbers:");
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
