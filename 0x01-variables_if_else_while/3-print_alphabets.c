#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     *
 *      **/
/* printing */
int main(void)
{
	/* main function */
	int i, j;

	i = 97;
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	j = 65;
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
