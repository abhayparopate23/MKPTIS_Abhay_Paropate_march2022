#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("enter a age of three person\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	if (a1>a2&&a1>a3)
	{
		printf("person no one is big");
	}
	if (a2>a1&&a2>a3)
	{
		printf("person no two is big");
	}
	if (a3>a1&&a3>a2)
	{
		printf("person no three is big");
	}
}
