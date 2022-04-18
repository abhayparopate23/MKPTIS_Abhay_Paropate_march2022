#include<stdio.h>
void main()
{
float p,r,t,si;
printf("enter principle,rate and time of inetrest\n");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("simple inetrest= %f",si);
getch();
}
