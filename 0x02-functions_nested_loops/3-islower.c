#include "main.h"
/**
 * _islower - Returns 1 if the input is lowercase and returns 0 otherwise
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
