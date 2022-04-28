#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,ser;
	for (i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a numbr u want to search");
	scanf("%d",&ser);
	for (i=0;i<5;i++)
	{
		if(a[i]==ser)
		{
			printf("number is present");
		}
		else 
		{
			printf("no is not present");
		}
	}
}

