#include "main.h"

/**
 *  *  *  * main - Entry point
 *   *   *   *
 *    *    *    * Return: Always 0 (Success)
 *     *     *     *
 *      *      *      **/
/* printing */
int main(void)
{
	/* main  */
       char c[] = "_putchar";
       int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return 0;
}
