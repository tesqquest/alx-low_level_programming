#include "main.h"

/**
* _islower - _islower (c)
* Returns: 1 or 0
*/
int _islower(int c)
{
	unsigned char x = c;

	if (isalpha(x))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* Main - check code
*
* Return: Always 0.
*/
