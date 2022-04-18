#include<stdio.h>
int main()
{
	float r,h,pi=3.14,v;
	printf("enter radus and height of cylinder");
	scanf("%f%f",&r,&h);
	v=pi*r*r*h;
	printf("volume of cylinder=%f",v);
	getch();
}
