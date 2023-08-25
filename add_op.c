#include "monty.h"

/*
 * add - adds the top two elements of the stack
 * @h: head of stack
 * @line_number: current line_number
 */

void _add(stack_t **h, unsigned int line_number)
{
	if (*h == NULL || (*h)->next == NULL)
        {
                fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
                EXIT_FAILURE;
        }
	(*h)->next->n += (*h)->n;
	pop(h, line_number);
}
