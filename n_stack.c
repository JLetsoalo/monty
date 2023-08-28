#include "monty.h"

/**
 * is_number - checks if a string has a digit in it
 * @n: integer to check
 * Return: 0 if is a digit, else -1 if not digit
 */

int is_number(const char *n)
{
	int x = 0;

	if (*n == '-')
	{
		x = 1;
		for (; *(n + x) != '\0'; x++)
		{
			if (isdigit(*(n + x)) == 0)
				return (-1);
		}
		return (0);
	}
	return (-1);
}

/**
 * push - adds a node at beginning of linked list
 * @h: linked list head
 * @line_number: bytecode line number
 * @n: integer
 */

void push(stack_t **h, unsigned int line_number, const char *n)
{
	if (!h)
		return;
	if (is_number(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_end_node(h, atoi(n)) == -1)
		{
			free_dlist(h);
			exit(EXIT_FAILURE);
		}
	}
}

/**
 * pop - removes node from beginning of a linked list
 * @h: head of linked list
 * @line_number: bytecode line number
 */

void pop(stack_t **h, unsigned int line_number)
{
	if (h == NULL || *h == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_dlist(h);
		exit(EXIT_FAILURE);
	}
	else
		delete_end_node(h);
}
