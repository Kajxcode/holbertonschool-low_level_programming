#include <unistd.h>
/**
 * _putchar - writes charcter c
 * @c: printed char
 * Return: 1 on success
 * on error -1 is returned 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
