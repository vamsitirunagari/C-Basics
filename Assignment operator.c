// Assignment operator
// x += y
// here x and y are added and the value stores in x thus x value changes and y remains same.


#include<stdio.h>
void main()
{
	int x=10, y=5;
	x += y;  // x=15  y=5
	y -= x;  // x=15  y=-10
	printf("%d %d", x, y);	
}
