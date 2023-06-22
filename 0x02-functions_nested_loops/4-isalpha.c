#include "main.h"
/**
 * _isalpha - Return 1 if the input is an uppercase or lowercase letter, Return 0 otherwise
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
