#include<stdio.h>
void main()
{
	int a=8, b=4,sum,diff,mult,div,mod_div;
	sum=a+b;
	diff=a-b;
	mult=a*b;
	div=a/b;
	mod_div=a%b;
	printf("Sum of %d and %d is %d\n",a,b, sum);
	printf("Difference between %d and %d is %d\n",a,b, diff);
	printf("Product of %d and %d is %d\n",a,b, mult);
	printf("Quotient when %d is divided by %d is %d\n",a,b, div);
	printf("Remainder when %d is divided by %d is %d\n",a,b, mod_div);
	printf("sum of all arithmetic operations is %d\n",sum+diff+mult+div+mod_div);
}
