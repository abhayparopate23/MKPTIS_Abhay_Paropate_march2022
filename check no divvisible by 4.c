#include<stdio.h>
#include<conio.h>
int main()
{
	int n,div;
	printf("enter a digiit  numder ");
	scanf("%d",n);
	div=n/4;
	if(div==0)
	{
		printf("no is divisible by 4");
	}
	if(div!=0)
	{
		printf("no is not dividible by 4");
	}
	return 0;
	
}
