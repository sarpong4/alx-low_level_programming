#include <unistd.h>

/**
 * _islower - Entry point
 *
 * Return: Always 0 (Success)
 */
/* printing */
int _islower(int c) 
{
	/* main  */
	if (c >= 97 || c <= 122)
	{
		return (1);
	}
	else {
		return (0);
	}
}
