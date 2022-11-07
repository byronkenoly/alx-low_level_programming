#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: number of command line arguments
* @argv: arrayy containing program command line arguments
*
* Return: 0 if inputs are integers, 1 if doesn't receive 2 args
*/

int main(int argc, char *argv[])
{
	int product;
	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
