#include <stdio.h>
#include<stdbool.h>
int findcount(int[5],int);
int main ()
{
	int a[5],i,count;
	printf("enter elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp[5];
	for(i=0;i<5;i++)
	{
		count = findcount(a,a[i]);
		if(count == 1)
		{
			temp[i] = true;
		}
		else
		{
			temp[i] = false;
		}	
		
	}
	printf("the array after removing duplicates is:\n");
	for(int i = 0; i<5;i++)
	{
		if (temp[i]==true)
		{
			printf("%d\n",a[i]);
		}
		}	
	return 0;
	}
int findcount(int a[5],int ele)	
{
	int count = 0;
	for(int i = 0;i<5;i++)
	{
		if(a[i] == ele)
		{ 
			count++;
		}
	}
	
	return count;
}			
			
