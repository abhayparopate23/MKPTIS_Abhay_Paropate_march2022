#include<stdio.h>
#include<conio.h>
int main()
{
int num,n1,n2,n3,cube;
printf("enter a three digit number");
scanf("%d",num);
n1=num%10;
num=num/10;
n2=num%10;
num=num/10;
n3=num%10;
cube=n1*n1*n1+n2*n2*n2+n3*n3*n3;
printf("cube=%d",cube);
if (cube==num)
{
printf("entered no is armstrong");
}
else
{
printf("entered no is not armstrong");
}
return 0;
}