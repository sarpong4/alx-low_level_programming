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
	int i;

	i = 97;
	while(i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
