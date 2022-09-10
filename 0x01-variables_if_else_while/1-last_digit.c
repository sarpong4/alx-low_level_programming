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
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	printf("Last digit of %d is %d and ", n, last);
	if (last > 5)
	{
		printf("is greater than 5");
	}
	else if (last < 6 && last > 0)
	{
		printf("is less than 6 and not 0");
	}
	else
	{
		printf("is 0");
	}
	return (0);
}
