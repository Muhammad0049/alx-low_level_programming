#include "main.h"

/**
 * _puts - prints a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
