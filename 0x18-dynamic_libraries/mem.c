#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack or the first occurrence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, sub = 0, j = 0, index = 0;

	while (haystack[i])
	{
		while (needle[j])
		{
			if (haystack[i] != needle[j])
			{
				j = 0;
				if (sub == 1)
					sub--;
				break;
			}
			else if (haystack[i] == needle[j])
			{
				j++;
				if (sub == 0)
				{
					sub++;
					index = i;
				}
				break;
			}
		}
		i++;
	}
	if (needle[0] == '\0')
		return (haystack);
	else if (sub == 0)
		return (0);
	else
		return (haystack + index);
}

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string 2
 * Return: NULL or the first occurrence of the character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string 2
 * Return: bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int bytes = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (bytes);
		i++;
	}
	return (bytes);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: n bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_memcpy - copies memory area
 * @dest: destination pointer
 * @src: pointer 2
 * @n: n bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
