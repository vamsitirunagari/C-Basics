#include<stdio.h>
void main()
{
	int a,b,ac,rc,bc;
	int choice;
	printf("Enter the numbers :");
	scanf("%d%d",&a,&b);
	printf("Enter your choice :\n1.Arithmetic\n2.Relation\n3.Bitwise\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter your choice\n1.+\n2.-\n3.*\n4./\n5.%%\n");
			scanf("%d",&ac);
			switch(ac)
			{
				case 1:
					printf("%d",a+b);
					break;
				case 2:
					printf("%d",a-b);
					break;
				case 3:
					printf("%d",a*b);
					break;
				case 4:
					printf("%d",a/b);
					break;
				case 5:
					printf("%d",a%b);
					break;
			}
		case 2:
			printf("Enter your choice:\n 1.>\n 2.<\n 3.>=\n 4.<=\n 5.==\n 6.!=\n");
			scanf("%d",&rc);
			switch(rc)
			{
				case1:
					printf("%d",a>b);
			}
	}
	
}
