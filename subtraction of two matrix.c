#include<stdio.h>
#include<conio.h>
int main()
{ 
// variable declaration
	int m1[2][2],m2[2][2],sub[2][2],i,j;
	//inpute element of first matrix:
	printf("enter a 2X2 matrix m1=\n");
	for(i=0;i<=1;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("m1[%d][%d]=",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	//inpute elemenet of second matrix:
	printf("enter a 2X2 matrix m2=\n");
	for(i=0;i<=1;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("m2[%d][%d]=",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//subtraction of two matrix:
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=1;j++)
		{
			sub[i][j]=m1[i][j]*m2[i][j];
		}
	}
	//print the output
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("subtraction of two matrix is=%d\n",sub[i][j]);
		}
	}
}
