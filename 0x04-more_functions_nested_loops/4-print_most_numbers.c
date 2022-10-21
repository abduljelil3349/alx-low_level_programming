#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 49 || ch != 51)
		{
			_putchar(ch);
		}
	}
	_putchar('\n');
}
