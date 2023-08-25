#include "monty.h"

/*
 * swap - swaps the top two elements of the stack
 * @h: head of stack
 * @line_number: current line_number
 */
void swap(stack_t **h, unsigned int line_number)
{
	stack_t *temp;
	
	if (*h == NULL || (*h)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		EXIT_FAILURE;
	}
	temp = (*h)->next;
	(*h)->next = temp->next;
	(*h)->next->prev = temp;
}
