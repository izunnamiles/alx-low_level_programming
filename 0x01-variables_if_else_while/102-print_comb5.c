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
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (!(j < l || i <= k))
					{
						continue;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (!(i == 57 && j == 56 && k == 57 && l == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
