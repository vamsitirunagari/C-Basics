// Logical Operator

//  &&------and-----if both conditions are true then true, if any one is false then false
//  ||------or------if any condition is true then true,    if both conditions are flase then false
//  ! ------not-----inverse truth (not ture--false) ( not false--true)

#include<stdio.h>
void main()
{
	int a=5,b=2;
	printf("%d",(a>b) && !(a<b));
}
