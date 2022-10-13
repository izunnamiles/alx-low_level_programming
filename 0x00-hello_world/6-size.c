#include <stdio.h>
/**
 * main - entry point
 *
 * Description: use printf function to print size of various types
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	printf("Size of a char: %a byte(s)\n" sizeof(char);
	printf("Size of a int: %a byte(s)\n" sizeof(int);
	printf("Size of a long: %a byte(s)\n" sizeof(long);
	printf("Size of a long int: %a byte(s)\n" sizeof(long int);
	printf("Size of a long long int: %a byte(s)\n" sizeof(long long int);
	printf("Size of a float: %a byte(s)\n" sizeof(float);
	return (0);
}
