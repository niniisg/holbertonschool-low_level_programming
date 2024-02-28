#include "main.h"

/**
 * _strncat -concatenates n characters from one  end to another
 * @dest: destination string
 * @src: sorce string
 * @n: the number of bytesof str that concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int  n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

return (dest);
}
