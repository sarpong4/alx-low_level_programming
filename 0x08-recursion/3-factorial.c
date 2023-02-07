/**
 * factorial - return the factorial of a given number
 * @n: number to calculated
 *
 * Return: the factorial(int) of n if n >= 0 else -1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
