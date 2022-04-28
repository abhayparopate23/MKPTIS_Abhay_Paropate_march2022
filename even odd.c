#include<stdio.h>
int main()
{
	int num,a;
	printf("enter any number to check its even or odd");
	scanf("%d",&num);
	a=num%2;
	if (a==0)
	{
		printf("enter number is even");
	}
	else 
	{
		printf("enter number is odd");
	}
}
