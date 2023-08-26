#include "monty.h"

/**
 * rotr - rotates the stack to the end
 * @h: head of the stack
 * @line_number: current line_number
 */
void rotr(stack_t **h, unsigned int line_number)
{       
        stack_t *bck, *temp;
        
        if ((*h)->next == NULL || (*h)->next->next == NULL)
                EXIT_FAILURE;
        
        bck = (*h)->next;
        temp = (*h)->next;
        while (temp->next != NULL)
                temp = temp->next;

	temp->next->prev = NULL;
	(*h)->next = temp;
	temp->prev = *h;
	temp->next = bck;
	bck->prev = temp;

	(void)line_number;
}
