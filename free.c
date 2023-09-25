#include "monty.h"

/**
 * free_stack - frees the stack
 * @top: top of the stack
*/

void free_stack(stack_t *top)
{
	stack_t *temp = NULL;

	while (top != NULL)
	{
		temp = top;
		top = top->next;
		free(temp);
	}
}
