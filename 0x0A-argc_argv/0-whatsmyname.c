#include <stdio.h>

/**
* main - main function
* @argc: number of command line arguments
* @argv: array containing command line arguments
*
* Return: always 0(Success)
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	
	return (0);
}
