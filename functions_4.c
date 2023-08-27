#include "monty.h"

void rotl(stack_t **h, unsigned int line_number);
void rotr(stack_t **h, unsigned int line_number);
void stack(stack_t **h, unsigned int line_number);
void queue(stack_t **h, unsigned int line_number);

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

/**
 * stack - sets the format of the data to a stack
 * @h: head of the stack
 * @line_number: current line_number
 */
void stack(stack_t **h, unsigned int line_number)
{
        (void)h;
        (void)line_number;
}

/**
 * queue - sets the format of the data to a queue (FIFO)
 * @h: head of the stack
 * line_number: current line_number
 */
void queue(stack_t **h, unsigned int line_number)
{
        (void)h;
        (void)line_number;
}
