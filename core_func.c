#include "monty.h"

/**
 * core_op_func - selects the right operation function
 * @token1: bytecode input
 * Return: pointer to operation function
 */

void (*core_op_func(char *token1))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"nop", nop},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	int x;

	/*while (instruction_s[x].f != NULL)*/
	for (x = 0; instruction_s[x].f != NULL; x++)
	{
		if (strcmp(token1, instruction_s[x].opcode) == 0)
			return (instruction_s[x].f);
		/* x++;*/
	}
	return (NULL);
}
