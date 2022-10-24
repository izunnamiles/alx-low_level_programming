#include "main.h"
/**
 * _puts - entry point
 *
 * Description: Pointers, array and strings
 *
 * @str: parameter to be an char
 *
 * Return: returns the length of the string;
 */
void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		_putchar(str[n]);
	_putchar('\n');
}
