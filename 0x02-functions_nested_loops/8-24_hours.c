#include "main.h"
/**
* print_alphabet_x10b-function that will print the alphabet 10 times
*
*/
void jack_bauer(void)
{
int min, hr;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hr / 10) + 48);
_putchar((hr % 10) + 48);
_putchar(':');
_putchar((min / 10) + 48);
_putchar((min % 10) + 48);
_putchar('\n');
}
}
}
