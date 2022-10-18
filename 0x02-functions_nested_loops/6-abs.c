#include "main.h"
/**
 * _abs - entry point
 *
 * Description: checks if parameter is alphabet
 *
 * @c: is the expected parameter
 *
 * Return: always 0 (success)
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
