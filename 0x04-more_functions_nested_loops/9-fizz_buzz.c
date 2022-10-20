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
	int x;

	for (x = 0; x <= 100 ; x++)
	{
		if (x == 0)
			continue;
		if (x % 5 == 0 && x % 3 == 0)
			printf("FizzBuzz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
