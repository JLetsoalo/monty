#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @h: head of stack
 * @line_number: current line_number
 */
void pop(stack_t **h, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		EXIT_FAILURE;
	}

	tmp = *h;
	free (*h);
	if (tmp)
		*h = tmp->next;
}

