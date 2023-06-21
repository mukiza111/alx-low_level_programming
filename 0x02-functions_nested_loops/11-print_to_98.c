#include "main.h"
/**
* print_alphabet_x10b-function that will print the alphabet 10 times
*
*/
void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; cout--)
printf("%d", count);
else
for (count = n; count < 98; cout++)
printf("%d", count);
printf("98\n");
}
