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
	switch (choice)
	{
	case 1:
		add=num1+num2;
		printf("addition of two number is = %d",add);
		break;
		case 2:
			sub=num1-num2;
			printf("subtraction of two number is =%d",sub);
			break;
			case 3:
				mul=num1*num2;
				printf("multiplication of two number is=%d",mul);
				break;
				case 4:
					div=num1/num2;
					printf("division of two number is =%d div",div);
					break;
				default:
					printf("envalid choice");
    }

}
