#include<stdio.h>
#include<conio.h>
int main()
{
	int p1,p2,p3;
	printf("enter age of three persons");
	scanf("%d%d%d",&p1,&p2,&p3);
	if(p1>p2&&p1>p3)
	{
		printf("person 1 is greater");
	}
	else if (p1<p2&&p2>p3)
	{
		printf("person 2 is greater");
	}
	else 
	{
		printf(" person 3 is greter");
	}
	getch();
}
