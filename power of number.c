#include<stdio.h>
int main()
{
	int x,y,power=1,i;
	printf("enter a number\n ");
	scanf("%d",&x);
	printf("enter power of number\n");
	scanf("%d",&y);
	while(i<=y)
	{
		power=power*x;
		i++;
	}
	printf("power of num%d",power);
}
