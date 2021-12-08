#include<stdio.h>
void main()
{
	int Eng,Mat,Phy,Che,Core,x;
	double z;
	x=Eng+Mat+Phy+Che+Core;
	z=(x*1.0)/5;
	printf("Enter the Marks\n");
	scanf("%d %d %d %d %d",&Eng,&Mat,&Phy,&Che,&Core);
	if(Eng>=28 && Mat>=28 && Phy>=28 && Che>=28 && Core>=28)
	{
		printf("Result:Pass/n");
		
		printf("Total Marks:%d",x);
		if(z>=90)
        {
			printf("O");
		}
		else if(z>=80)
		{
			printf("A");
	    }
        else if(z>=70)
		{	
			printf("B");
		}
		else if(z>=60)
		{
			printf("C");
		}
		else
		{
			printf("D");
		}
	}
	
	else
	{
		printf("Fail");
	}
}
