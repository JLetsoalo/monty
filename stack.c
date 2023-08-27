#include "monty.h"
#include <string.h>

void f_stack(stack_t **s);
int i_stack(stack_t **s);
int check_mode(stack_t *s);

/**
 * f_stack - frees stack_t
 * @s: is the head ot bottom pointer of a stack_t
 */

void f_stack(stack_t **s)
{
	stack_t *snd = *s;

	while (*s)
	{
		snd = (*s)->next;
			free(*s);
			*s = snd;
	}
}

/**
 * i_stack - initializes the beginning stack ending queue nodes
 * @s:n pointer of the unitialised stack_t
 * Return: EXIT_FAILURE if it fails / EXIT_SUCESS if it passes
 */
int i_stack(stack_t **s)
{
	stack_t *h, STACK;

	h = malloc(sizeof(stack_t));
	if (h == NULL)
		return (EXIT_FAILURE);
	
	h->n = STACK;
	h->next = NULL;
	h->prev = NULL;

	*s = h;
	return (EXIT_SUCCESS);
}

/**
 * check_node - to check whether a stack_t linked list is in stack or queue nod
 * @s: head ot bottom of a stack_t 
 * Return: in stack node STACK (0) and in stack node QUEUE (1)
 */
int check_mode(stack_t *s)
{
	if (s->n == STACK)
		return (STACK);
	else if (s->n == QUEUE)
		return (QUEUE);
	return (2);
}
