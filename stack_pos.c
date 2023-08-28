#include "monty.h"

/**
 *  * swap - swap locations of previous stack with the top stack
 *   * @h: node to be swapped
 *    * @line_number: node number
 *     */

void swap(stack_t **h, unsigned int line_number)
{
	stack_t *tmpry = NULL;

	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmpry = (*h)->next;
	if (tmpry->next != NULL)
	{
		(*h)->next = tmpry->next;
		(*h)->next->prev = *h;

	}
	else
	{
		tmpry->prev->prev = tmpry;
		tmpry->prev->next = NULL;
		tmpry->prev = NULL;
		tmpry->next = *h;
		(*h) = tmpry;
	}
}

/**
 *  * rotl - rotate so top of stack becomes last one, second becomes first one
 *   * @h: node to be rotated
 *    * @line_number: node number
 *     */

void rotl(stack_t **h, unsigned int line_number)
{
	stack_t *tmpry;

	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmpry = *h;
		while (tmpry->next != NULL)
		{
			tmpry = tmpry->next;
		}
		(*h)->prev = tmpry;
		tmpry->next = *h;
		(*h)->next->prev = NULL;
		*h = (*h)->next;
		tmpry->next->next = NULL;
	}
}

/**
 *  * rotr - rotate so only bottom node of stack becomes first one
 *   * @h: node to be rotated
 *    * @line_number: node number
 *     */

void rotr(stack_t **h, unsigned int line_number)
{
	stack_t *tmpry;

	(void) line_number;

	if ((*h)->next != NULL)
	{
		tmpry = *h;
		while (tmpry->next != NULL)
		{
			tmpry = tmpry->next;
			(*h)->prev = tmpry;
			tmpry->next = *h;
			tmpry->prev->next = NULL;
			tmpry->prev = NULL;
			(*h) = (*h)->prev;
		}
	}
}
