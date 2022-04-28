#include<stdio.h>
#include<conio.h>
int main()
{
	float num1,num2,res;
	char choice;
	printf("enter + for addition\n");
	printf("enter - for subtraction\n");
	printf("enter *for multiplication\n");
	printf("enter / for dividion\n");
	printf("enter your choice\n");
	scanf("%c",&choice);
	if(choice=='+')
	{
		printf("enter two number");
		scanf("%f%f",&num1,&num2);
		res=num1+num2;
		printf("addition of two number is %f",res);
	}
	else if (choice=='-')
	{
		printf("enter two number");
		scanf("%f%f",&num1,&num2);
		res=num1-num2;
		printf("subtraction of two number is %f",res);
	}
	else if(choice=='*')
	{
		printf("enter two number");
		scanf("%f%f",&num1,&num2);
		res=num1*num2;
		printf("multiplication of two number is %f",res);
	}
	else if (choice=='/')
	{
		printf("enter two number");
		scanf("%f%f",&num1,&num2);
		res=num1/num2;
		printf("division of two number is %f",res);
	}
	else 
	{
		printf(" invalid choice");
	}
}
