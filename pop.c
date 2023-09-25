#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @head: top of stack
 * @line_number: line number in file
*/

void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL)
		error_cmd(line_number, "pop");
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
