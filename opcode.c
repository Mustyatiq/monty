#include "monty.h"

/**
 * init_opcode - initializes commands to be used
 * Return: an array of instruction_t structure
*/

instruction_t *init_opcode()
{
	instruction_t *instructions;

	instructions = (instruction_t *)malloc(LEN_ARR * sizeof(instruction_t));
	instructions[0].opcode = "push";
	instructions[0].f = push;
	instructions[1].opcode = "pint";
	instructions[1].f = pint;
	instructions[2].opcode = "pall";
	instructions[2].f = pall;
	instructions[3].opcode = "pop";
	instructions[3].f = pop;
	instructions[4].opcode = "swap";
	instructions[4].f = swap;
	instructions[5].opcode = "add";
	instructions[5].f = add;
	instructions[6].opcode = "nop";
	instructions[6].f = nop;

	return (instructions);
}
