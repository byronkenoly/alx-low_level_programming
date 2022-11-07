#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - main function
* @argc: number of command line arguments
* @argv: arrayy containing program command line arguments
*
* Return: 0 for 3  arguments, otherwise 1
*/

int main(int argc, char *argv[])
{
	int product;
	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
