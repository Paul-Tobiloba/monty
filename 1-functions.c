#include "monty.h"
/**
 * start_vars - Funtion to inicializate and make malloc
 * @vars: Structure element
 * Return: ?
 */
int start_vars(vars *vars)
{
    vars->file = NULL;
    vars->buff = NULL;
    vars->sizz = 0;
    vars->instuctions = NULL;
    vars->h = NULL;
    vars->line_number = 0;

    return (EXIT_SUCCESS);
}