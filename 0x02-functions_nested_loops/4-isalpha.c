#include <unistd.h>

/**
 * _isalpha - Entry point
 *
 * @c: int value of character to be checked.
 *
 * Return: Always 0 (Success)
 */
/* printing */
int _isalpha(int c)
{
	/* main  */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
