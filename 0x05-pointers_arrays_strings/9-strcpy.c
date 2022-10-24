#include "main.h"
/**
 * _strcpy - entry point
 *
 * Description: Pointers, array and strings
 *
 * @dest: parameter to be an int array
 * @src: parameter to be an int count of the array
 *
 * Return: copies value of the second parameter;
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
