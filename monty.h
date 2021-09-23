#ifndef _MONTY_H_
#define _MONTY_H_
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO 
 */
typedef struct instruction_s
{
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * 1-function.c
 * struct vars_st - global var
 * @file: ?
 * @buff: ?
 * @sizz: ?
 * @instuctions: ?
 * @h: ?
 * @line_number: ?
 * Description: our global variable
 */

typedef struct vars_st
{
    FILE *file;
    char *buff;
    size_t sizz;
    instruction_t *instuctions;
    stack_t *h;
    unsigned int line_number;

} vars;
vars vars_t;
/**************/
/* 0-functions.c */
/**************/
void (*get_opp(char *opcode))(stack_t **stack, unsigned int line_number);
void freeAll(void);
int start_vars(vars *vars);
/**************/
/* 2-math.c */
/**************/
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void divide(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
/**************/
/* 3-print.c */
/**************/
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
/**************/
/* 4-modify.c */
/**************/
void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
/* print swap the top and top-1*/
void swap(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
/*************/
/* 5-misc.c */
/*************/
void nop(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

int _isdigit(int carac);
int getinfo(char *buf, char *opcode, int *val);
#endif /* _MONTY_H_ */