#include "main.h"

/**
* _isupper - checks whether input is uppercase
*@c: character
*
* Return: 1 if uppercase. 0 otherwisee
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
