#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],i,j,temp;
	printf("enter a 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<5;i++)
	{
		for (j=i+1;i<5;i++)
		{
			if (a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting");
	for (i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
