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
	print_alphabet();
	return (0);
}

/*
* Description: print a-z
*/
void print_alphabet(){
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
