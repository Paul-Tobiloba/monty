#include "monty.h"

/**
 * pall - print all
 * @stack: stack
 * @line_number: line number
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
    (void)line_number;
    if (!tmp)
        return;
    while (tmp)
    {
        printf("%d\n", tmp->n);
        tmp = tmp->next;
    }
}
/**
 * pint - ?
 * @stack: ?
 * @line_number: ?
 */
void pint(stack_t **stack, unsigned int line_number)
{
    /* check if stack is valid or if stack is empty */
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}
/**
 * pchar - ?
 * @stack: ?
 * @line_number: ?
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    int n = (*stack)->n;

    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    if (n < 0 || 127 < n)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%c\n", (*stack)->n);
}
/**
 * pstr - ?
 * @stack: ?
 * @line_number: ?
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *runner = *stack;

    (void)line_number;
    if (!stack)
    {
        /* TODO invalid stack */
    }

    /* is a empty list? */
    if (!runner)
    {
        printf("\n");
        return;
    }

    /*
	 * check if n is not null
	 */
    while (runner->n)
    {
        printf("%c", runner->n);
        runner = runner->next;
        if (!runner || !(runner->n))
        {
            printf("\n");
            return;
        }
    }
}