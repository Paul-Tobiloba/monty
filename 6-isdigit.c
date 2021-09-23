#include "monty.h"

/**
 * _isdigit - ?
 * @carac: Num to validate
 * Return: 0 or 1
 */
int _isdigit(int carac)
{
    int i;

    if (carac >= '0' && carac <= '9')
        i = 1;
    else
        i = 0;
    return (i);
}