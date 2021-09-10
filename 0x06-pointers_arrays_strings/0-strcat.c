#include "main.h"

/**
* _strcat - function concatenates two strings
* @dest: string to be appended to
* @src: string to be appended
* Return: returns a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] = '\0'; j++)  
	{
		dest[i+j] = src[j];
		
	}
	return (dest);
}

