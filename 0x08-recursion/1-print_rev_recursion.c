#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: the string to be reversed
 */

void _print_rev_recursion(char *s)
{ 
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
