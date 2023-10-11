#include "main.h"

/**
 * times_table - prints the times table 
 * 
 * Return: void
 */
void times_table(void)
{
int i;
for (i=0; i<10; i++)
{
    int j;
    for(j=0; j<10; j++)
    {
        
        _putchar(i*j);
    }
    _putchar('\n');
}
}
