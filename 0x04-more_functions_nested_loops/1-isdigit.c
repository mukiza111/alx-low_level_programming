#include "main.h"

/**
* _idigit -check if input is digit between 0 - 9
*
*@c: input for alphabet
*
*Return: 1 if it is digit, 0 if not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
