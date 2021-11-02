#include<stdio.h>
void main()
{
	int P,T;
	float R,SI;
	P=10000;
	T=2;
	R=7.5;
	SI=P*T*R/100;
	printf("Simple interest on an amount %d for %d years @%f rate of interest is %f",P,T,R,SI);

}
