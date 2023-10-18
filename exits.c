#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: the destination of the string
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, i;
	char *s = dest;

	x = 0;
	while (src[x] != '\0' && x < n - 1)
	{
		dest[x] = src[x];
		x++;
	}
	if (x < n)
	{
		i = x;
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, i;
	char *s = dest;

	x = 0;
	i = 0;
	while (dest[x] != '\0')
		x++;
	while (src[i] != '\0' && i < n)
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	if (i < n)
		dest[x] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
