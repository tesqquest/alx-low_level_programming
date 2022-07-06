#include "main.h"

/**
* print_alphabet - print_alphabet
*
*/
void print_alphabet(void)
{
	char test = 'a';

	while (test <= 'z')
	{
		_putchar(test);
		test++;
	}

	_putchar('\n');
}

/**
* Main - check code
*
* Return: Always 0.
*/
