#include "monty.h"
/**
 * push - ?
 * @stack: ?
 * @line_number: ?
 */
void push(stack_t **stack, unsigned int line_number)
{
    char *num = NULL;
    unsigned int i = 0;
    int neg = 1;
    stack_t *tmp = NULL;

    num = strtok(NULL, " \t\n");
    if (!num)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number), freeAll();
        exit(EXIT_FAILURE);
    } /* is a negative number?*/
    if (num[0] == '-')
        neg = -1, num++;
    while (num[i] != '\000' && num[i] != '\n')
    {
        if (_isdigit(num[i]) == 0)
        {
            fprintf(stderr, "L%u: usage: push integer\n", line_number),
                freeAll(), exit(EXIT_FAILURE);
        }
        i++;
    }
    tmp = malloc(sizeof(stack_t));
    if (!tmp)
    {
        fprintf(stderr, "Error: malloc failed\n"), freeAll();
        exit(EXIT_FAILURE);
    }
    tmp->n = neg * atoi(num);
    tmp->next = NULL;
    if (!*stack)
        tmp->prev = NULL, *stack = tmp;
    else
        tmp->next = *stack, (*stack)->prev = tmp, *stack = tmp;
}
/**
 * pop - ?
  * @stack: ?
 * @line_number: ?
 */
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

    if (!*stack)
        fprintf(stderr, "L%u: can't pop an empty stack\n", line_number),
            freeAll(), exit(EXIT_FAILURE);
    *stack = tmp->next;
    if (tmp->next != NULL)
        tmp->next->prev = NULL;
    free(tmp);
}
/**
 * swap - ?
  * @stack: ?
 * @line_number: ?
 */
void swap(stack_t **stack, unsigned int line_number)
{
    int tmp;

    if (!(*stack) || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    tmp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = tmp;
}
/**
 * rotl - ?
  * @stack: ?
 * @line_number: ?
 */
void rotl(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
}
/**
 * rotr - ?
  * @stack: ?
 * @line_number: ?
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
}