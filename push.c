#include "monty.h"

/**
 * push - insert an element to the top of stack.
 * @top: top of stack
 * @line_number: line number in file
*/

void push(stack_t **top, unsigned int line_number)
{
	char *number;
	stack_t *new = (stack_t *)malloc(sizeof(stack_t));

	new->next = NULL;
	new->prev = NULL;

	if (new == NULL)
		error_msg1("malloc");
	number = strtok(NULL, " ");
	if (int_check(number))
		error_cmd(line_number, "push");
	if (*top == NULL)
	{
		new->n = atoi(number);
		*top = new;
	} else
	{
		new->n = atoi(number);
		(*top)->prev = new;
		new->next = *top;
		*top = new;
	}
}

/**
 * int_check - checks whether push arg is integer
 * @str: argument to check
 * Return: 1 if arg is not integer 0 otherwise
*/

int int_check(char *str)
{
	size_t i;

	if (str == NULL)
		return (1);
	i = 0;
	while (i < strlen(str))
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}
