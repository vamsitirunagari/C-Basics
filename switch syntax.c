#include<stdio.h>
void main()
{
	int choice;
	printf("Enter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("This is case 1");
			break;
		case 2:
			printf("This is case 2");
		case 3:
			printf("This is case 3");
			
	}
}
