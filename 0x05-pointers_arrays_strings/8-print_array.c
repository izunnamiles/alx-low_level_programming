#include "main.h"
/**
 * print_array - entry point
 *
 * Description: Pointers, array and strings
 *
 * @a: parameter to be an int array
 * @n: parameter to be an int count of the array
 *
 * Return: converts value set to the function to 98;
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
