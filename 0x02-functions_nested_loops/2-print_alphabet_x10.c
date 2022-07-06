#include "main.h"

/**
* print_alphabet_x10 - print_alphabet_x10
*
*/
void print_alphabet_x10(void)
{
	char test = 'a';

	for (i = 0 ; i <= 10 ; i++)
	{
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
