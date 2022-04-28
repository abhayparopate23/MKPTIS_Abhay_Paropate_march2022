#include<stdio.h>
int main()
{
	int num,rev=0,a;
	printf("enter any number to reverse");
	scanf("%d",&num);
	while(num>0)
	{
		a=num%10;
		rev=rev*10+a;
		num=num/10;
	}
	printf("reverse of number is %d\n",rev);
}
