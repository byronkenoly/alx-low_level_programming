#include <stdio.h>

/**
* main - main function
* @argc: number of command line arguments
* @argv: array containing program command line arguments
*
* Return: always 0(Success)
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	
	return (0);
}
