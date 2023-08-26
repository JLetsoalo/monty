#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @h: head of the stack
 * @line_number: current line_number
 */
void pall(stack_t **h, unsigned int line_number)
{
	stack_t *snd = *h;

	while (snd)
	{
		printf("%d\n", snd->n);
		snd = snd->next;
	}

	(void)line_number;
}
