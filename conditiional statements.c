#include<stdio.h>
void main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>18)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not elligible");
	}
}
