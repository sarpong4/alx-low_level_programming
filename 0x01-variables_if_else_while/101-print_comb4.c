#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     *
 *      *      **/
/* printing */
int main(void)
{
       	/* main function */
	int i, j, k;

	i = 48;
	while (i < 56)
	{
		j = i +1;
		while (j <= 56)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;			
		}
		i++;
	}
	putchar('\n');
	return (0);
}
