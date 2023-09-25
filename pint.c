#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line.
 * @head: top of stack
 * @line_number: line number in file
*/

void pint(stack_t **head, unsigned int line_number)
{
	char number[256];

	if (*head == NULL)
		error_cmd(line_number, "pint");
	sprintf(number, "%d\n", (*head)->n);
	printf("%s", number);
}
