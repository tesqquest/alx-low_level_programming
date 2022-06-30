#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a="a";
	int b=1;
	long int c=1;
	long long int d=1;
	float e=10.1;
	printf("Size of a char: %c bytes", sizeof(a));
	printf("Size of an int: %d bytes", sizeof(b));
	printf("Size of a long int: %d bytes", sizeof(c));
	printf("Size of a long long int: %d bytes", sizeof(d));
	printf("size of a float: %f bytes", sizeof(e));
	return (0);
}
