#include <unistd.h>

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
/* printing */
int _isalpha(int c) 
{
	/* main  */
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else {
		return (0);
	}
}
