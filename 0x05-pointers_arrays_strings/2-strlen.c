#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: thats the string to get the lenght
 * Return: the lenght of @str
 */
size_t_strlen(const char *str)
{
	size_t lenght = 0;

	while (*str++)
		lenght++;
	return (lenght);
}
