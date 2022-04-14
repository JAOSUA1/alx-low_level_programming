#innclude "main.h"
/**
 * _isupper - check for uppecase alphabets
 * @c: which is the input character to check
 *
 * Return: 1 at suiccess and 0 otherwise
 */
int _isupper(int c)
{
	for (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
