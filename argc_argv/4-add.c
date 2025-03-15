#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if successful, 1 if a non-digit argument is found
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char* ptr = argv[i];

		while (*ptr)
		{
			if (*ptr < '0' || *ptr > '9')
			{
				printf("Error\n");
				return (1);
			}
			ptr++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
