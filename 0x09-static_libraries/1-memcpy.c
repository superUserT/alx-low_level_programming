#include "main.h" 

/**
 * _memcpy - a function that copies memory area
 * @dest: the destination of storage, a pointer
 * @src: th source of the data
 * @n: thevariable to initiate transfer
 * Return: A void a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int j = n;

	for (; t < j; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
