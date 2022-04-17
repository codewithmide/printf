#include "main.h"
#include <unistd.h>

/**
 * _putchar - Use a local buffer of 1024 chars in order to call write 
 * as little as possible.
 * @c: The character to print
 * Return: On success 1.
 * On error return -1
 */
{
	static char buf[1024];
	static int k;

	if (c == -1 || k >= 1024)
	{
		write(1, &buf, k);
		k = 0;
	}
	if (c != -1)
	{
		buf[k] = c;
		k++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int k;

	for (k = 0; str[k] != '\0'; k++)
		_putchar(str[k]);
	return (k);
}
