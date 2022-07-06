#include "main.h"

/**
* print_alphabet_x10 - print_alphabet_x10
*
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 1 ; i <= 10 ; i++)
	{
		char test = 'a';

		while (test <= 'z')
		{
			_putchar(test);
			test++;
		}
		_putchar('\n');
	}
}

/**
* Main - check code
*
* Return: Always 0.
*/
