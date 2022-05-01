#include<stdio.h>
int main()
{
	int s,m,h,sec;
	printf("enter time in second\n");
	scanf("%d",&s);
	h=s/3600;
	m=(s-(h*3600))/60;
	sec=s-((h*3600)+(m*60));
	printf("hours=%d\n",h);
	printf("minutes=%d\n",m);
	printf("srcond=%d\n",sec);
}
