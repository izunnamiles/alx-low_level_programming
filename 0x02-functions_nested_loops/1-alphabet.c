#include "main.h"
/**
 * main - entry point
 *
 * Description: functions and nested loops
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
