#include "main.h"

/**
* _isupper - checks whether input is uppercase
*
* return 1 if uppercase otherwise return 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
