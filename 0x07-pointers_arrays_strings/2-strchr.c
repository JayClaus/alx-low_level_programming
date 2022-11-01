#include <stdlib.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character that is beiing looked for
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
