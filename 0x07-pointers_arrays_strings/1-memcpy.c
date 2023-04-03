include "main.h" 

/**
 * _memcpy - a function that copies memory area
 * @dest: the destination of storage, a pointer
 * @src: th source of the data
 * @n: thevariable to initiate transfer
 * Return: A void a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *asrc = *src;
	char *adest = *dest;
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		adest[counter] = asrc[counter];
	}
	return (dest);
}
