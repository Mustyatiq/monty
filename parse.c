#include "monty.h"

/**
 * parse - extracts the command from .m file and execute it
 * @fp: file pointer for .m file
 * @top: top of stack
*/

void parse(FILE *fp, stack_t **top)
{
	unsigned int i, line_number;
	char str[256];
	char *token_0;
	instruction_t *temp;

	line_number = 1;
	temp = init_opcode();
	while (fgets(str, 256, fp) != NULL)
	{
		if (str[strlen(str) - 1] == '\n')
			str[strlen(str) - 1] = '\0';
		if (check_space(str) == 0)
			goto a;
		i = check(token_0 = strtok(str, " "), temp, line_number, fp);
		temp[i].f(top, line_number);
a:
			line_number++;
	}
	free(temp);
}

/**
 * check_space - handles an empty line in .m file
 * @str: line from .m file
 * Return: 1 is str not spaces of null 0 otherwise
*/

int check_space(char *str)
{
	size_t i;

	i = 0;
	while (i < strlen(str))
	{
		if (str[i] != ' ' && str[i] != '\n')
			return (1);
		i++;
	}
	return (0);
}

/**
 * check - searches for cmd from list of cmd
 * @token_0: cmd from .m file
 * @temp: list of cmd to search from
 * @line_number: line number in file
 * Return: index of cmd in list
*/

int check(char *token_0, instruction_t *temp, unsigned int line_number, FILE *file_pointer)
{
	int i;

	for (i = 0; i < LEN_ARR; i++)
	{
		if (strcmp(token_0, temp[i].opcode) == 0)
			return (i);
	}
	free(temp);
	free(file_pointer);
	error_msg3(token_0, line_number);
	return (0);
}
