#include "main.h"
/**
 * puts_half - entry point
 *
 * Description: Pointers, array and strings
 *
 * @str: parameter to be an char
 *
 * Return: returns the string;
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
