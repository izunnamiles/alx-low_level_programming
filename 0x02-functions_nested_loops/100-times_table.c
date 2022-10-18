#include "main.h"
/**
 * times_table - entry point
 *
 * Description: return times table
 *
 * Return: return times  table
 */
void print_times_table(int n)
{
	int i, j, k;
	
	if (n > 15 || n < 0)
	{
		_putchar(' ');
	} else
	{
		for (i = 0; i <= 12; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= 12; j++)
			{
				k = (i * j);
				if ((k / 10) > 0)
				{
					_putchar((k / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((k % 10) + '0');

				if (j < 12)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
