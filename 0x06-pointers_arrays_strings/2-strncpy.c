#include "main.h"
/**
* _strncat - function that concatenates two strings
*@dest: pointer to destination input
*@src: pointer to source input
*
*Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
