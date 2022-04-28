#include<stdio.h>
int main()
{
	int i,a,add=0;
	printf("enter any number");
	scanf("%d",&i);
	while(i>0)
	{
		a=i%10;
		add=add+a;
		i=i/10;		
	}
	printf("addition of n digit number is =%d ",add);
}
