#include "main.h"
/**
 * _print_rev_recursion - Print a rev string
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return (0);
    
  _print_rev_recursion(s + 1);
  _putchar(*s);
}
