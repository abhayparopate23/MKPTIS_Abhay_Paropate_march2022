#include<stdio.h>
int main()
{
	int num,cube=0,a,bak;
	printf("enter any no check is that armstrong");
	scanf("%d",&num);
	bak=num;
	while(num>0)
	{
		a=num%10;
		cube=cube+a*a*a;
		num=num/10;
	}
	printf("square of number is =%d\n",cube);
	if (bak==cube)
	{
		printf("number is armstrong\n");
	}
	else 
	{
		printf("number is not armstrong\n");
	}
}
