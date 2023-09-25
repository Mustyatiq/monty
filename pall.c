#include "monty.h"

/**
 * pall - prints all the elements in stack from the topmost
 * @top: the top of the stack
 * @line_number: line number in file
*/

void pall(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;
	(void)line_number;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
