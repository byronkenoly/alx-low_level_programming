#include <stdio.h>
#include <ctype.h>

/**
* main - main function
* @argc: number of command line arguments
* @argv: array containing command line arguments
*
* Return: 1 if a symbol isn't a digit, 0 if success
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;
	
	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);

			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
