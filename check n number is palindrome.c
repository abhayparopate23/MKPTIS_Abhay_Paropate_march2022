#include<stdio.h>
int main()
{
	int a ,rev=0,num,bak;
	printf("enter a number ");
	scanf("%d",&a);
	bak=a;
	while(a>0)
	{
	num=a%10;
	rev=rev*10+num;
	a=a/10;
	printf("rev=%d\n",rev);
    }
	if (rev==bak)
	{
		printf("enter number is palindrome\n");
	}
	else
	{
		printf("number is not palindrome\n");
	 } 
}
