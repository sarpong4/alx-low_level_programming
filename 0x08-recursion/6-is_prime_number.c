#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 1.
 *         If the number is not divisible - 0.
 */

int is_divisible(int num, int div)
{
	int x;

	if (num % div == 0)
		return (1);

	x = num / 2;

	if (div == x)
		return (0);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: If the number is prime - 1.
 *         If the number is not - 0.
 */

int is_prime_number(int n)
{
	int div;

	div = 2;
	if (n == 1)
		return (0);
	if (is_divisible(n, div))
		return (0);
	else
		return (1);
}
