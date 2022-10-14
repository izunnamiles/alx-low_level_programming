#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: conditional statements
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n",lastNum);
	if (lastNum == 0)
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", lastNum);
	if (lastNum < 6 && lastNum != 0)
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", lastNum);
	return (0);
}
