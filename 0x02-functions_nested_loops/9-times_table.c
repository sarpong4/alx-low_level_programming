#include "main.h"

/**
 * times_table - prints the times table of an integer starting with zero
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int k, l, m, n, prod;

	for (m = 48; m <= 57; m++)
	{
		for (n = 48; n <= 57; n++)
		{
			k = m - 48;
			l = n - 48;
			prod = k * l;
			
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n == 0)
			{
				_putchar('0');
			}

			else if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (n != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
