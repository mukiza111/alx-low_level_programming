#include "main.h"
#include <stdio.h>
/**
* _strlen -return the length of a strin
* Return:length of @str.
*/
int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
