/*
* _isdigit - check if val is digit
* @c: val to be checked
*
* Return: Returns 1 or 0
*/

int _isdigit(int c)
{
	if ( c >= 48 && c <= 57)
		return (1);
	return (0);
}
