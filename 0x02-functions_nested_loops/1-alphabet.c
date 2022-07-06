#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

int main(void)
{
	char test = "a";
	int i;

	while (test <= "z")
	{
		_putchar(test);
		test++;
	}
	_putchar('\n');
	return (0);
}
