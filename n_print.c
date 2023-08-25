#include "monty.h"

/**
 * pall - prints all nodes in stack
 * @h: head of list
 * @line_number: bytecode line number
 */

void pall(stack_t **h, unsigned int line_number)
{
	stack_t *tmpry = NULL;

	if (!h || !*h)
		return;

	(void) line_number;
	tmpry = *h;
	while (tmpry != NULL)
	{
		printf("%d\n", tmpry->n);
		tmpry = tmpry->next;
	}
}

/**
 * pint - print top node in stack as letters
 * @h: list head
 * @line_number: bytecode line number
 */

void pint(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can not pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*h)->n);

}

/**
 * pchar - prints top node in stack
 * @h: head of list
 * @line_number: bytecode line number
 */

void pchar(stack_t **h, unsigned int line_number)
{
	if (!h || !*h)
	{
		printf("L%u: can not pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*h)->n) >= 0 && ((*h)->n) <= 127)
		printf("%c\n", (*h)->n);
	else
	{
		printf("L%u: can not pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

}

/**
 * pstr - outputs top nodes in stack as ascii letter
 * stop if end of stack.
 * @h: list head
 * @line_number: line number of bytecode
 */

void pstr(stack_t **h, unsigned int line_number)
{
	stack_t *tmpry;

	if (!h || !*h)
	{
		printf("L%u: can not pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmpry = *h;
	while ((tmpry != NULL) && (tmpry->n != 0) &&
	       (tmpry->n >= 0) && (tmpry->n <= 127))
	{
		printf("%c", (tmpry)->n);
		tmpry = tmpry->next;
	}
	printf("\n");
}

/**
 * nop - does nothing
 * @h: list head
 * @line_number: bytecode line number
 */

void nop(stack_t **h, unsigned int line_number)
{
	(void) h;
	(void) line_number;
}
