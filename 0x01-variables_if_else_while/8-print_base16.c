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
	int n, x;

	n = 0;
	x = 'a';

	while (n <= 9)
	{
		putchar('0' + n % 10);
		n++;
	}

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
