#include "monty.h"
/**
 * push - push a new data to the stack/ queue
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 */
void push(stack_t **head, unsigned int line_number)
{
	int j = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			{
				fprintf(stderr, "L%d: usage: push integer\n", line_number);
				fclose(bus.file);
				free(bus.content);
				free_stack(*head);
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	addnode(head, atoi(bus.arg));
}
