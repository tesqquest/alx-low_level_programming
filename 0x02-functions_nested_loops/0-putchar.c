#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

int main(void)
{
	char test[9] = "_putchar";
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(test[i]);
	}
	_putchar('\n');
	return (0);
}
