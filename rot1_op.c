#include "monty.h"

/**
 * rot1 - rotates the stack
 * @h: the head of the stack
 * @line_number: current line_number
 */
void rotl(stack_t **h, unsigned int line_number)
{
        stack_t *bck, *temp;

        if ((*h)->next == NULL || (*h)->next->next == NULL)
                EXIT_FAILURE;

        bck = (*h)->next;
        temp = (*h)->next;
        while (temp->next != NULL)
                temp = temp->next;

        bck->next->prev = *h;
        (*h)->next = bck->next;
        temp->next = bck;
        bck->next = NULL;
        bck->prev = temp;

        (void)line_number;
}
