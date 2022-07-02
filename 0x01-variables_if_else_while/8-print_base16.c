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
	int n;

	n = 0;

	while (n <= 9)
	{
		putchar('0' + n % 16);
		n++;
	}

	putchar('\n');
	return (0);
}
