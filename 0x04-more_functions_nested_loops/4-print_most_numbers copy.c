#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: functions and nested loops
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}

