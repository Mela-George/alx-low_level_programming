#include "main.h"
/**
 * print_alphabet_x10 - prints ten times the alphabet in lowercase and new line
 *
 * Return: Always 0lphabet_x10.c (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
