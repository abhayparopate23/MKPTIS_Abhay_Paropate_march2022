#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,num2,n1,n2,n3,rev,bak;
	printf("enter a 3 diit number");
	scanf("%d",&num);
	bak=num;
	n1=num%10;
	num1=num/10;
	n2=num1%10;
	num2=num1/10;
	n3=num2%10;
	rev=n1*100+n2*10+n3*1;
	if (rev==bak)
	{
		printf("enter number is palindrome");
	}
	else 
	{
		printf("number is not palindrome");
	}
	getch();
}
