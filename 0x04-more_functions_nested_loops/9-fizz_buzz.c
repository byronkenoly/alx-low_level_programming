#include <stdio.h>

/**
* main - prints numbers from 1-100, for multiples of 3 print fizz and print buzz fro multiples of 5
*
* Return: Always success(0)
*/

int main(void)
{
	int num;
	
	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (num % 3 != 0 && num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
