# Monty: C - Stacks, Queues - LIFO, FIFO:

This repository is about an ALX project about Stacks and queues - LIFO and FIFO. It Helps understanding the diffrent oprations like push, pop, pall, swap...

## The Monty language:

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

#### Environmental Specs:

- Environment: Ubuntu 20.04 LTS
- Compiler: gcc 4.8.4 (C90)
- Languages: C language, Monty
- Compilation & Output:
  `$ gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty`

#### Concept Covered:

- What do LIFO and FIFO mean.
- What is a stack, and when to use it.
- What is a queue, and when to use it.
- What are the common implementations of stacks and queues.
- What are the most common use cases of stacks and queues.
- What is the proper way to use global variables.

#### Opcodes:

| Opcode |                                                Description                                                |
| :----: | :-------------------------------------------------------------------------------------------------------: |
|  push  |                                      Push an elements to the stack.                                       |
|  pall  |                  Prints all the values on the stack, starting from the top of the stack.                  |
|  pint  |                     Prints the value at the top of the stack, followed by a new line.                     |
|  pop   |                                   Removes the top element of the stack.                                   |
|  swap  |                                 Swaps the top two elements of the stack.                                  |
|  add   |                                  Adds the top two elements of the stack.                                  |
|  sub   |             Subtracts the top element of the stack from the second top element of the stack.              |
|  div   |               Divides the second top element of the stack by the top element of the stack.                |
|  mul   |             Multiplies the second top element of the stack with the top element of the stack.             |
|  mod   | Computes the rest of the division of the second top element of the stack by the top element of the stack. |
| pchar  |                     Prints the char at the top of the stack, followed by a new line.                      |
|  pstr  |                Prints the string starting at the top of the stack, followed by a new line.                |
|  rotl  |                                       Rotates the stack to the top.                                       |
|  rotr  |                                     Rotates the stack to the bottom.                                      |
| stack  |        Sets the format of the data to a stack (LIFO). This is the default behavior of the program.        |
| queue  |                              Sets the format of the data to a queue (FIFO).                               |

#### Author:

PAUL TOBILOBA OKE <twiseas9ice@gmail.com>
