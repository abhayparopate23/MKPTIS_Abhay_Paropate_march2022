#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mul,div,choice;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("press 1 for addition\n ");
	printf("press 2 for subtraction\n ");
	printf("press 3 for multiplication\n ");
	printf("press 4 for division\n ");
	printf("enter your choice");
	scanf("%d",& choice);
	if (choice==1)
	{
		add=num1+num2;
		printf("addition of two numbber is%d",add);
	}
	else if (choice==2)
	{
		sub=num1-num2;
		printf("subtraction of two numbber is%d",sub);
	}
	else if (  choice==3)
	{
		mul=num1*num2;
		printf("multipliication  of two numbber is%d",mul);
	}
	else if (choice==4)
	{
		div=num1%num2;
		printf("division of two numbber is%d",div);
	}
}
