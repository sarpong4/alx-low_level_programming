#include <unistd.h>

/**
 * _islower - Entry point
 *
 * @c: int value of character to be checked.
 *
 * Return: Always 0 (Success)
 */
/* printing */
int _islower(int c)
{
	/* main  */
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
