#innclude "main.h"
/**
 * _isupper - check for uppecase alphabets
 * @c: which is the input character to check
 *
 * Return: 1 at suiccess and 0 otherwise
 */
int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
