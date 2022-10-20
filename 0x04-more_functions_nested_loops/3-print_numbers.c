#include "main.h"
/**
 * main - entry point
 *
 * Description: functions and nested loops
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x[] = {0, 1, 2, 3 , 4, 5, 6, 7, 8, 9};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
