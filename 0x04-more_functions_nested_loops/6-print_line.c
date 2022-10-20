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
	int m;

	m = 0;
	while(m < n)
	{
		putchar('_');
	}
	_putchar('\n');
}

