#include <stdio.h>
/**
 * main - entry point
 *
 * Description: conditional statements
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar(toLower(x));
	}
	return (0);
}
