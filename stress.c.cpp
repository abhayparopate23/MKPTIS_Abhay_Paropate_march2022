#include<stdio.h>
int main()
{
	float p,a,stress;
	printf("enter external force and cross sectional area\n");
	scanf("%f%f",&p,&a);
	stress=p/a;
	printf("stress= %f",stress);
return 0;
}
