#include<stdio.h>
#include<conio.h>
int main()
{
	int length,breadth,height,volume;
	printf("enter length=\n,breadth=\n,height=\n");
	scanf("%d%d%d",&length,&breadth,&height);
	volume=length*breadth*height;
	printf("volume=%d",volume);
	getch();	
}
