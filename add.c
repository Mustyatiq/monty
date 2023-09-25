#include "monty.h"

/**
 * add - adds the top and previous elements
 * @stack: Top of stack
 * @line_number: line number in file
*/

void add(stack_t **stack, unsigned int line_number)
{
	int sum, elements;
	stack_t *temp;

	temp = *stack;
	elements = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		elements++;
	}
	if (elements < 2)
		error_cmd(line_number, "add");
	sum = (*stack)->n + (*stack)->next->n;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = sum;
	free(temp);
}
