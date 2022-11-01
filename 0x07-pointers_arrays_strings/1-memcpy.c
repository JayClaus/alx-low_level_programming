#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		dest[t] = src[t];

	return (dest);
}
