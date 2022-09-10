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

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	j = 97;
	while (j  <= 102)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
