#include "main.h"
/**
 * _print_rev_recursion - Print a rev string
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_print_rev_recursion(--s);
	}
}