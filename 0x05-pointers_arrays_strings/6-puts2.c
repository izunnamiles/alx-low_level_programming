#include "main.h"
/**
 * puts2 - entry point
 *
 * Description: Pointers, array and strings
 *
 * @str: parameter to be an char
 *
 * Return: returns the string;
 */
void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		if (n % 2 == 0)
			_putchar(str[n]);
	_putchar('\n');
}
