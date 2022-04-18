#include<stdio.h>
#include<conio.h>
int main()
{
	float f,area,pressure;
	printf("enter force and area");
	scanf("%f%f",&f,&area);
	pressure=f/area;
	printf("pressure=%f",pressure);
	getch();
	
	}
