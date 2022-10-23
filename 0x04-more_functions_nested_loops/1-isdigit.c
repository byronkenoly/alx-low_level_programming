#include "main.h"

/**
* _isdigit - checks whether function input is a digit
* @c: input digit
*
* Return: 1 if input is a digit. 0 otherwise 
*/

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
