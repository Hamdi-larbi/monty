#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * sub - removes the top element of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 *
 */

void sub(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;
	int i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	(*head)->n = (*head)->n - temp->n;
	(*head)->prev = NULL;
	temp->next = NULL;
	free(temp);
	temp = NULL;
}
