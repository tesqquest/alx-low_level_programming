#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	/* your code goes there */

	printf("Last digit of %d ", n);

	if (last > 5)
	{
		printf("is %d and is greater than 5\n", last);
	}
	else if (last == 0)
	{
		printf("is %d and is 0\n", last);
	}
	else
	{
		printf("is %d and is less than 6 and not 0\n", last);
	}
	return (0);
}
