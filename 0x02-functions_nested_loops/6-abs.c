<<<<<<< HEAD
#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: int value of character to be checked.
 *
 * Return: Always 0 (Success)
 */
/* printing */
int print_sign(int n)
{
	/* main  */
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
=======
/**
 * _abs - Computes the absolute value of an integer
 *@n: number being tested
 * Return: Always 0.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
>>>>>>> refs/remotes/origin/master
}
