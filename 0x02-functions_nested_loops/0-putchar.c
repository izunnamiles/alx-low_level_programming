#include <stdio.h>
#include <main.h>
/**
 * main - entry point
 *
 * Description: functions and nested loops
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char *x = "_putchar";

	while (*x)
	{
		_putchar(*x);
		x++;
	}
	_putchar('\n');
	return (0);
}
