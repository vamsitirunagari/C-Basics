#include<stdio.h>
void main()
{
	int n,x,y,z;
	n=5;
	x=n*(n+1)/2;
	y=n*(n+1);
	z=n*n;
	printf("Sum of first %d natural numbers is %d\n",n,x);
	printf("Sum of first %d even natural numbers is %d\n",n,y);
	printf("Sum of first %d odd natural numbers is %d\n",n,z);
}
