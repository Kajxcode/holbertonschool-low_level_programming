#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++) /* Loop through all arguments */
		printf("%s\n", argv[i]);

	return (0);
}
