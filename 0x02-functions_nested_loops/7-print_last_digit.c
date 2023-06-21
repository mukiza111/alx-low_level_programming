#include "main.h"
/**
* print_alphabet_x10b-function that will print the alphabet 10 times
*
*/
int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
lastDigit = -1 * (n % 10);
else
lastDigit = n % 10;
_putchar(lastDigit + '0');
return (lastDigit);
}
