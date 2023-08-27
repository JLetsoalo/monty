#include "monty.h"

/**
 * push -  pushes an element to the stack
 * @h: head of the stack
 * @line_number: current line_number
 */
void push(stack_t **h, unsigned int line_number, const char *n)
{
        int tmp, n = 0, snd = 0;

        if (nxt.arg)
        {
                if (nxt.arg[0] == '-')
                        n++;
                for (; nxt.arg[n] != '\0'; n++)
                {
                        if (nxt.arg[n] > 57 || nxt.arg[n] < 48)
                                snd = 1;
                }
                if (snd == 1)
                {
                        fprintf(stderr, "L%u: usage: push integer\n", line_number);
                EXIT_FAILURE;
                }}

                else
                {
                        fprintf(stderr, "L%u: usage: push integer\n", line_number);
                EXIT_FAILURE;
                }
                tmp = atoi(nxt.arg);
                if (nxt.lifi == 0)
                        addnode(h, tmp);
                else
                        addqueue(h, tmp);
}
