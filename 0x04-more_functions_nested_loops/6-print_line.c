#include "main.h"
/**
 * print_line - entry point
 *
 * Description: functions and nested loops
 *
 * @n: expected parameter in integer
 *
 * Return: void
 */
void print_line(int n)
{
	if (n < 0)
		_putchar('\n');

	while(--n)
	{
		putchar('_');
		_putchar('\n');
	}
}

