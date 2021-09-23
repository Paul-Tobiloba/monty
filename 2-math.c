#include "monty.h"

/**
* add - add top of stack with the second
* @stack: stack
* @line_number: line number
 */
void add(stack_t **stack, unsigned int line_number)
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
        freeAll(), exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n + (*stack)->n;
    pop(stack, line_number);
}
/**
 * sub - substract top to the second value
  * @stack: stack
 * @line_number: line in the program
 */
void sub(stack_t **stack, unsigned int line_number)
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
        freeAll(), exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n - (*stack)->n;
    pop(stack, line_number);
}
/**
 * mul - multiplication
  * @stack: stack
 * @line_number: line number in the program
 */
void mul(stack_t **stack, unsigned int line_number)
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
        freeAll(), exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n * (*stack)->n;
    pop(stack, line_number);
}
/**
 * divide - divition
 * @stack: stack
 * @line_number: line number in the program
 */
void divide(stack_t **stack, unsigned int line_number)
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        freeAll(), exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number), freeAll();
        exit(EXIT_FAILURE);
    }

    (*stack)->next->n = (*stack)->next->n / (*stack)->n;
    pop(stack, line_number);
}
/**
 * mod - module
  * @stack: stack
 * @line_number: line number
 */
void mod(stack_t **stack, unsigned int line_number)
{
    if (!*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
        freeAll(), exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%u: division by zero\n", line_number), freeAll();
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n % (*stack)->n;
    pop(stack, line_number);
}