#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch1[100];
	char ch2[100];
	printf("enter any in lwrcase\n");
	scanf("%s",ch1);
	// to store char string no assign operator required and no and box too
	for (i=0;ch1[i]!='\0';i++)
	// slash " \" is required to get desired output otherwise shows garbage value
	{
		ch2[i]=ch1[i]-32;
		// the diffn in upr casee and lwr case is 32 in askee hence 32 is used 
	}
	printf("%s",ch2);
}
