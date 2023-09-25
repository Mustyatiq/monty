#include "monty.h"

/**
 * error_msg1 - display error message to stderr
 * @str: type of error
*/

void error_msg1(char *str)
{
	if (!strcmp(str, "file"))
		write(2, "USAGE: monty file\n", 18);
	else if (!strcmp(str, "malloc"))
	{
		write(2, "Error: malloc failed\n", 21);
		free_stack(top);
	}
	exit(EXIT_FAILURE);
}

/**
 * error_msg2 - display error message to stderr
 * @str: file name/path
*/

void error_msg2(char *str)
{
	char str1[256];

	sprintf(str1, "Error: Can't open file %s\n", str);
	write(2, str1, strlen(str1));
	exit(EXIT_FAILURE);
}

/**
 * error_msg3 - display error message to stderr
 * @cmd: command
 * @line_number: line number in file
*/

void error_msg3(char *cmd, unsigned int line_number)
{
	char str[256];

	sprintf(str, "L%d: unknown instruction %s\n", line_number, cmd);
	write(2, str, strlen(str));
	free_stack(top);
	exit(EXIT_FAILURE);
}
