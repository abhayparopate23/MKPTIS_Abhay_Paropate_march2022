#include<stdio.h>
int main()
{
	int num,num1,num2,num3,n1,n2,n3,add;
	printf("enter a three digit number");
	scanf("%d",&num);
	n1=num%10;
	num1=num/10;
	n2=num1%10;
	num2=num1/10;
	n3=num2%10;
	add=n1+n2+n3;
	printf("addition of three digit number=%d",add);
}
