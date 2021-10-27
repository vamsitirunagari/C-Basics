#include<stdio.h>
#include<limits.h>
int main()
{
	printf("Short int:\nSigned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("Unsigned: %d to %hu\n", 0, USHRT_MAX);
	printf("int:\nSigned: %d to %d\n", INT_MAX);
	printf("Unsigned: %d to %u\n", 0, INT_MAX);
	printf("Long int: \nSigned: %ld to %ld\n", LONG_MAX);
	printf("Unsigned: %d to %lu\n", 0, LONG_MAX);
	printf("Long Long int: \nSigned: %lld to %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
	printf("Unsigned: %d to %llu", 0, LONG_LONG_MAX);
}

