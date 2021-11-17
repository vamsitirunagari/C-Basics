#include<stdio.h>
void main()
{
	int x,y,z;
	x=10;
	y=4;
	z=3;
	x += y; // x=14   y=4
	y -= z; // x=14   y=1   z=3
	z += x; // x=14   y=1   z=17
	y *= x; // x=14   y=14  z=17
	x *= z; // x=238  y=14  z=17
	printf("%d %d %d",x,y,z);
}
