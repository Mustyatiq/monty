#include "monty.h"

/**
 * swap - swap value of top element and prevoius element.
 * @stack: top of stack
 * @line_number: line number in file
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int swap, elements;
	stack_t *temp;

	temp = *stack;
	elements = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		elements++;
	}
	if (elements < 2)
		error_cmd(line_number, "swap");
	swap = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swap;
}
