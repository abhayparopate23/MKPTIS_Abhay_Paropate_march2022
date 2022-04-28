#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("enter any number to see its factorial\n");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of n =%d\n",fact);
	
}
