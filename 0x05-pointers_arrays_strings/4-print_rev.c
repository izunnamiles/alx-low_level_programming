#include "main.h"
/**
 * print_rev - entry point
 *
 * Description: Pointers, array and strings
 *
 * @s: parameter to be an char
 *
 * Return: returns rev of the string;
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n--)
		_putchar(s[n]);
	_putchar('\n');
}
