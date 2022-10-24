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

	for (i = 0; i <= n; i++)
	{
		printf(" %d", a[i]);
		if (i != n){
			printf(",");
		}
	}
}
