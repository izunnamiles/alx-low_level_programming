#include "main.h"
/**
 * print_to_98 - entry point
 *
 * Description: return countdown
 *
 * @n: is the expected parameter
 *
 * Return: loop an integer to return 98
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
