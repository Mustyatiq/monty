#include "monty.h"

/**
 * error_cmd - displays error message to stderr
 * @line_number: line number in file
 * @type: type of error
*/


void error_cmd(unsigned int line_number, char *type)
{
	char str1[256];

	if (!strcmp(type, "pint"))
		sprintf(str1, "L%d: can't pint, stack empty\n", line_number);
	else if (!strcmp(type, "pop"))
		sprintf(str1, "L%d: can't pop stack empty\n", line_number);
	else if (!strcmp(type, "add"))
		sprintf(str1, "L%d: can't add, stack too short\n", line_number);
	else if (!strcmp(type, "swap"))
		sprintf(str1, "L%d: can't swap, stack too short\n", line_number);
	else if (!strcmp(type, "push"))
		sprintf(str1, "L%d: usage: push integer\n", line_number);

	write(2, str1, strlen(str1));
	
	free_stack(top);
	exit(EXIT_FAILURE);
}
