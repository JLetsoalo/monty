#include "monty.h"

/**
 * main - entry into n main interpreter
 * @argc: argc counts arguments
 * @argv: arguments to count
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fnd, is_push = 0;
	unsigned int line = 1;
	ssize_t n_read;
	char *buffer, *token;
		stack_t *h = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fnd = open(argv[1], O_RDONLY);
	if (fnd == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buffer = malloc(sizeof(char) * 10000);
	if (!buffer)
	{
		return (0);
	}
	n_read = read(fnd, buffer, 10000);
	if (n_read == -1)
	{
		free(buffer);
		close(fnd);
		exit(EXIT_FAILURE);
	}
	token = strtok(buffer, "\n\t\a\r ;:");
	while (token != NULL)
	{
		if (is_push == 1)
		{
			push(&h, line, token);
			is_push = 0;
			token = strtok(NULL, "\n\t\a\r ;:");
			line++;
			continue;
		}
		else if (strcmp(token, "push") == 0)
		{
			is_push = 1;
			token = strtok(NULL, "\n\t\a\r ;:");
			continue;
		}
		else
		{
			if (core_op_func(token) != 0)
			{
				core_op_func(token)(&h, line);
			}
			else
			{
				free_dlist(&h);
				printf("L%d: unknown instruction %s\n", line, token);
				exit(EXIT_FAILURE);
			}
		}
		line++;
		token = strtok(NULL, "\n\t\a\r ;:");
	}
	free_dlist(&h); free(buffer);
	close(fnd);
	return (0);
}
