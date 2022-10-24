#include "main.h"
/**
 * _strlen - entry point
 *
 * Description: Pointers, array and strings
 *
 * @s: parameter to be an char
 *
 * Return: returns the length of the string;
 */
int _strlen(char *s)
{
	int n, sum;
	char r = s[0];

	n = 0;
	sum = 0;

	while (r != '\0')
	{
		sum++;
		r = s[n++];
	}
	return (sum);
}
