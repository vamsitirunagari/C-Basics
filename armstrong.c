#include<stdio.h>
int main()
{
	int number,num,r,cube=0;
	printf("enter the number");
	scanf("%d",&num);
	number=num;
	while(num>0)//0
	{
		r=num%10;//1
		cube=cube+(r*r*r);//27+125=152+1=153
		num=num/10;//0
		
	}
	if(number==cube)
	{
		printf("armstrong number");
	}
	
	else
	{
		printf("not an armstrong number");
	}
	return 0;
}
