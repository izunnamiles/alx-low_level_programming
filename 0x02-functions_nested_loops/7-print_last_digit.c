#include "main.h"
/**
 * print_last_digit - entry point
 *
 * Description: checks if parameter is alphabet
 *
 * @c: is the expected parameter
 *
 * Return: always 0 (success)
 */
int print_last_digit(int c)
{
	int s;

	s = (c % 10);
	_putchar(s);
	return (s);
}
