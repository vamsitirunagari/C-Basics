#include<stdio.h>
int main()
{
	int n,r,sum=0,product=1;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		product+=r;
		sum+=r;
		n=n/10;
	}
	
	if(sum==product)
	{
		printf("spy number");
	}
	else
	{
		printf("not a spy number");
	}
	
}
