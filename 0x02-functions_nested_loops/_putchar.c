#include <unistd.h>

/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 *     *     *
 *      *      **/
/* printing */
int _putchar(char c) 
{
	/* main  */
	return (write(1, &c, 1));
}
