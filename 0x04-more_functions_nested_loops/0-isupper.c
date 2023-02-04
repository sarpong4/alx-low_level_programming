/**
 * _isupper -  checks if input is uppercase.
 * @c: character to check
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
