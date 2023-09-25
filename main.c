#include "monty.h"

/**
 * main - Executes code
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
*/

stack_t *top = NULL;

int main(int argc, char **argv)
{
	FILE *file_ptr = NULL;

	if (argc >= 3 || argc == 1)
		error_msg1("file");
	else
	{
		file_ptr = fopen(argv[1], "r");
		if (file_ptr == NULL)
			error_msg2(argv[1]);
		parse(file_ptr, &top);
	}
	free(file_ptr);
	free_stack(top);
	return (0);
}
