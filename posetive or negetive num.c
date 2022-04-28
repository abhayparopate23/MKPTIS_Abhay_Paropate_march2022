#include<stdio.h>
int main()
{
	int num;
	printf("enter a number to check wether its posetive or negetive");
	scanf("%d",&num);
	if (num<0)
	{
		printf("enter number is negetive");
	}
	else if(num>0)
	{
		printf("enter number is posetive ");
	}
	else 
	{
		printf("enter number is zero");
	}
}
