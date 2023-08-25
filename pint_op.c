#include "monty.h"

/**
 * pint - prints a new line after the value at the top of the stack.
 * @h: is the head of the stack
 * @line_number: current working line_number
 */

void pint(stack_t **h, unsigned int line_number)
{
        if (*h == NULL)
        {
                core_op_func(strerror(line_number));
                EXIT_FAILURE;
        }

        printf("%d\n", (*h)->n);
}
